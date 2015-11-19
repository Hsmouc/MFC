// satelliteView.cpp : implementation of the CSatelliteView class
//

#include "stdafx.h"
#include "satellite.h"
#include "Radii.h"
#include "Width.h"
#include "satelliteDoc.h"
#include "satelliteView.h"
#include "math.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSatelliteView

IMPLEMENT_DYNCREATE(CSatelliteView, CView)

BEGIN_MESSAGE_MAP(CSatelliteView, CView)
	//{{AFX_MSG_MAP(CSatelliteView)
	ON_COMMAND(ID_Start, OnStart)
	ON_COMMAND(ID_Stop, OnStop)
	ON_COMMAND(ID_High, OnHigh)
	ON_COMMAND(ID_Medium, OnMedium)
	ON_COMMAND(ID_Low, OnLow)
	ON_COMMAND(ID_Width, OnWidth)
	ON_COMMAND(ID_Radii, OnRadii)
	ON_COMMAND(ID_Color, OnColor)
	ON_WM_LBUTTONDOWN()
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSatelliteView construction/destruction

CSatelliteView::CSatelliteView()
{
	// TODO: add construction code here

}

CSatelliteView::~CSatelliteView()
{
}

BOOL CSatelliteView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CSatelliteView drawing

void CSatelliteView::OnDraw(CDC* pDC)
{
	CSatelliteDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CRect rectClient;
	GetClientRect(&rectClient);
	double x,y;
	x=(rectClient.right-rectClient.left)/2;
	y=(rectClient.bottom-rectClient.top)/2;
    pDC->SelectStockObject(NULL_BRUSH);
	CPen newPen;
	CPen newPenx;
	CPen newPen_satellite;
	newPen.CreatePen(PS_SOLID,pDoc->m_widthDoc,pDoc->m_orbitColor);
	newPen_satellite.CreatePen(PS_SOLID,2,pDoc->m_satelliteColor);
	newPenx.CreatePen(PS_SOLID,pDoc->m_widthDocx,pDoc->m_orbitColor);
    CPen *poldPen;
	poldPen=pDC->SelectObject(&newPen);
	pDC->Ellipse(x-pDoc->m_radiiDoc,y-pDoc->m_radiiDoc,x+pDoc->m_radiiDoc,y+pDoc->m_radiiDoc);
	poldPen=pDC->SelectObject(&newPenx);
	pDC->Ellipse(x-pDoc->m_radiiDocx,y-pDoc->m_radiiDocx,x+pDoc->m_radiiDocx,y+pDoc->m_radiiDocx);
	poldPen=pDC->SelectObject(&newPen_satellite);
	pDC->Ellipse(x+pDoc->m_radiiDoc*cos(pDoc->m_angle)-15,y+pDoc->m_radiiDoc*sin(pDoc->m_angle)-15,x+pDoc->m_radiiDoc*cos(pDoc->m_angle)+15,y+pDoc->m_radiiDoc*sin(pDoc->m_angle)+15);
	pDC->Ellipse(x+pDoc->m_radiiDocx*cos(pDoc->m_angle)-15,y+pDoc->m_radiiDocx*sin(pDoc->m_angle)-15,x+pDoc->m_radiiDocx*cos(pDoc->m_angle)+15,y+pDoc->m_radiiDocx*sin(pDoc->m_angle)+15);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CSatelliteView printing

BOOL CSatelliteView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CSatelliteView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CSatelliteView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CSatelliteView diagnostics

#ifdef _DEBUG
void CSatelliteView::AssertValid() const
{
	CView::AssertValid();
}

void CSatelliteView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSatelliteDoc* CSatelliteView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSatelliteDoc)));
	return (CSatelliteDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSatelliteView message handlers

void CSatelliteView::OnStart() 
{
	// TODO: Add your command handler code here
	CSatelliteDoc *pDoc=GetDocument();
	ASSERT_VALID(pDoc);
	SetTimer(1,100,NULL);
	
}

void CSatelliteView::OnStop() 
{
	// TODO: Add your command handler code here
	CSatelliteDoc *pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	KillTimer(1);
	
}

void CSatelliteView::OnHigh() 
{
	// TODO: Add your command handler code here
	CSatelliteDoc *pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->m_speed = 1.0;
	
}

void CSatelliteView::OnMedium() 
{
	// TODO: Add your command handler code here
	CSatelliteDoc *pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->m_speed = 0.5;
	
}

void CSatelliteView::OnLow() 
{
	// TODO: Add your command handler code here
	CSatelliteDoc *pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->m_speed = 0.1;
}

void CSatelliteView::OnWidth() 
{
	// TODO: Add your command handler code here
	CSatelliteDoc *pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	Width dlgInput;
	int nRet = dlgInput.DoModal();
	if(nRet == IDOK)
	{
		pDoc->m_widthDoc=dlgInput.m_width;
		pDoc->m_widthDocx=dlgInput.m_widthx;
		Invalidate();
	}
	
}

void CSatelliteView::OnRadii() 
{
	// TODO: Add your command handler code here
	CSatelliteDoc *pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	Radii dlgInput;
	int nRet = dlgInput.DoModal();
	if(nRet == IDOK)
	{
		pDoc->m_radiiDoc=dlgInput.m_radii;
		pDoc->m_radiiDocx=dlgInput.m_radiix;
		Invalidate();
	}
	

	
}

void CSatelliteView::OnColor() 
{
	// TODO: Add your command handler code here
	CSatelliteDoc *pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CColorDialog dlg;
	if(dlg.DoModal() == IDOK)
	{
		pDoc->m_orbitColor=dlg.GetColor();
		Invalidate();
	}	
}

void CSatelliteView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CSatelliteDoc *pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CColorDialog dlg;
	if(dlg.DoModal() == IDOK)
	{
		pDoc->m_satelliteColor=dlg.GetColor();
		Invalidate();
	}
	CView::OnLButtonDown(nFlags, point);
}

void CSatelliteView::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	CSatelliteDoc *pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->m_angle += pDoc->m_speed;
	Invalidate();
	CView::OnTimer(nIDEvent);
}
