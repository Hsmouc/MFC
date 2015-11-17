// Function curveView.cpp : implementation of the CFunctioncurveView class
//

#include "stdafx.h"
#include "Function curve.h"
#include "Function curveDoc.h"
#include "Function curveView.h"
#include "olorDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CFunctioncurveView

IMPLEMENT_DYNCREATE(CFunctioncurveView, CView)

BEGIN_MESSAGE_MAP(CFunctioncurveView, CView)
	//{{AFX_MSG_MAP(CFunctioncurveView)
	ON_COMMAND(ID_MENUITEM32771, OnInput)
	ON_COMMAND(sin, Onsin)
	ON_COMMAND(cos, Oncos)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFunctioncurveView construction/destruction

CFunctioncurveView::CFunctioncurveView()
{
	// TODO: add construction code here

}

CFunctioncurveView::~CFunctioncurveView()
{
}

BOOL CFunctioncurveView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CFunctioncurveView drawing

void CFunctioncurveView::OnDraw(CDC* pDC)
{
	CFunctioncurveDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	const double PI=3.14159265359;
	const double dbYMax=1.0;
	const double dbYMin=-1.0;
	const double dbXMin=0.0;
	const double dbXMax=2*PI;
	const int iPt = 200;
	const int xOrg = 50;
	const int yOrg = 350;
	const int xMax = 700;
	const int yMin = 20;
	double dbXRatio=(xMax-xOrg)/(dbXMax-dbXMin);
    double dbYRatio=(yOrg-yMin)/(dbYMax-dbYMin);
    int x = xOrg;
    int y = yOrg;
	if(!pDoc->m_boolNew)
	{	    
		pDC->MoveTo(x,y);
	    CPen penNew,*ppenOld;
	   	penNew.CreatePen(PS_SOLID,2,pDoc->m_brush);
	    ppenOld=pDC->SelectObject(&penNew);
	//	if(pDoc->model == 0)
	//	{
    	    for (int i =0;i <= iPt; i++)
			{	
			  double tmp = dbXMax/iPt*i;
  	          x = (int)(dbXRatio*(tmp-dbXMin)+xOrg);
		      y = (int)(yOrg-dbYRatio*(sin(tmp)-dbYMin));
		      pDC->LineTo(x,y);
			}
	//	}
		/*else
		{
	        for (int i =0;i <= iPt; i++)
			{	
  		      x = (int)(dbXRatio*(dbXMax/iPt*i-dbXMin)+xOrg);
		      y = (int)(yOrg-dbYRatio*(cos(dbXMax/iPt*i)-dbYMin));
		      pDC->LineTo(x,y);
			}		 
		}*/
		pDC->SelectObject(ppenOld);
		penNew.DeleteObject();
		pDC->MoveTo(xOrg,yOrg);
		pDC->LineTo(xMax,yOrg);
		pDC->MoveTo(xOrg,yOrg);
		pDC->LineTo(xOrg,yMin);
		x=(xMax-xOrg)/2;
		y=yOrg+10;
        pDC->TextOut(x,y,"X");
		x=xOrg-20;
		y=(yOrg-yMin)/2;
		pDC->TextOut (x,y,"Y");
	}
	else 
	{
		CRect rectClient;
		GetClientRect(rectClient);
		pDC->FillSolidRect(rectClient,RGB(255,255,255));
	}
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CFunctioncurveView printing

BOOL CFunctioncurveView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CFunctioncurveView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CFunctioncurveView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CFunctioncurveView diagnostics

#ifdef _DEBUG
void CFunctioncurveView::AssertValid() const
{
	CView::AssertValid();
}

void CFunctioncurveView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CFunctioncurveDoc* CFunctioncurveView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CFunctioncurveDoc)));
	return (CFunctioncurveDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CFunctioncurveView message handlers

void CFunctioncurveView::OnInput() 
{
	// TODO: Add your command handler code here
	CFunctioncurveDoc *pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CColorDialog colordlg(pDoc->m_brush);
	pDoc->m_brush = RGB(255,0,0); 
	if(colordlg.DoModal()== IDOK)
	{
		pDoc->m_brush = colordlg.GetColor();
	    pDoc->m_boolNew=false;
		InvalidateRect(NULL);
    }
}

void CFunctioncurveView::Onsin() 
{
	// TODO: Add your command handler code here
	CFunctioncurveDoc *pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->model = 0;
	
}

void CFunctioncurveView::Oncos() 
{
	// TODO: Add your command handler code here
	CFunctioncurveDoc *pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->model = 1;
	
}
