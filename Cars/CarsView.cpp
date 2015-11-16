// CarsView.cpp : implementation of the CCarsView class
//

#include "stdafx.h"
#include "Cars.h"
#include "CarsDlg.h"
#include "CarsDoc.h"
#include "CarsView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCarsView

IMPLEMENT_DYNCREATE(CCarsView, CView)

BEGIN_MESSAGE_MAP(CCarsView, CView)
	//{{AFX_MSG_MAP(CCarsView)
	ON_COMMAND(Car_start, Onstart)
	ON_WM_TIMER()
	ON_COMMAND(Car_stop, Onstop)
	ON_COMMAND(Speed_high, Onhigh)
	ON_COMMAND(Speed_medium, Onmedium)
	ON_COMMAND(Speed_low, Onlow)
	ON_COMMAND(ID_MENUITEM32777, OnMenuitem32777)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCarsView construction/destruction

CCarsView::CCarsView()
{
	// TODO: add construction code here

}

CCarsView::~CCarsView()
{
}

BOOL CCarsView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CCarsView drawing

void CCarsView::OnDraw(CDC* pDC)
{
	CCarsDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDC->Rectangle(pDoc->m_rectCar);
	pDC->MoveTo(50,50);
	pDC->LineTo(pDoc->m_Length,50);
	pDC->MoveTo(50,50+(pDoc->m_Width));
	pDC->LineTo(pDoc->m_Length,50+(pDoc->m_Width));
	
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CCarsView printing

BOOL CCarsView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CCarsView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CCarsView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CCarsView diagnostics

#ifdef _DEBUG
void CCarsView::AssertValid() const
{
	CView::AssertValid();
}

void CCarsView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCarsDoc* CCarsView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCarsDoc)));
	return (CCarsDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCarsView message handlers

void CCarsView::Onstart() 
{
	// TODO: Add your command handler code here
	CCarsDoc *pDoc=GetDocument();
	ASSERT_VALID(pDoc);
	CRect rectClient;
	GetClientRect(&rectClient);
	SetTimer(1,100,NULL);
	
	
}

void CCarsView::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	CCarsDoc *pDoc=GetDocument();
	ASSERT_VALID(pDoc);
	InvalidateRect(pDoc->m_rectCar,TRUE);
	static int flag = 1;
	if(pDoc->m_rectCar.right > pDoc->m_Length || pDoc->m_rectCar.left < 50)
	{
		flag *= -1;
	}	
    pDoc->m_rectCar.left += pDoc->speed*flag;
	pDoc->m_rectCar.right += pDoc->speed*flag;
	
	InvalidateRect(pDoc->m_rectCar,FALSE);
	CView::OnTimer(nIDEvent);
	
}

void CCarsView::Onstop() 
{
	// TODO: Add your command handler code here
	KillTimer(1);
}

void CCarsView::Onhigh() 
{
	// TODO: Add your command handler code here
    CCarsDoc *pDoc=GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->speed=10;
}

void CCarsView::Onmedium() 
{
	// TODO: Add your command handler code here
	CCarsDoc *pDoc=GetDocument();
	ASSERT_VALID(pDoc);
    pDoc->speed=5;
}

void CCarsView::Onlow() 
{
	// TODO: Add your command handler code here
    CCarsDoc *pDoc=GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->speed=1;
}

void CCarsView::OnMenuitem32777() 
{
	// TODO: Add your command handler code here
	CCarsDoc *pDoc=GetDocument();
	ASSERT_VALID(pDoc);
	CCarsDlg dlginput;
	int nRet = dlginput.DoModal();
	if(nRet = IDOK)
	{
		pDoc->m_Length=dlginput.m_Length;
		pDoc->m_Width=dlginput.m_Width;
		pDoc->m_boolNew=false;
		Invalidate();
	}

}
