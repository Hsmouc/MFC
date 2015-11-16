// CountView.cpp : implementation of the CCountView class
//

#include "stdafx.h"
#include "Count.h"

#include "CountDoc.h"
#include "CountView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCountView

IMPLEMENT_DYNCREATE(CCountView, CView)

BEGIN_MESSAGE_MAP(CCountView, CView)
	//{{AFX_MSG_MAP(CCountView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCountView construction/destruction

CCountView::CCountView()
{
	// TODO: add construction code here

}

CCountView::~CCountView()
{
}

BOOL CCountView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CCountView drawing

void CCountView::OnDraw(CDC* pDC)
{
	CCountDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CString strDisplay;
	CPen penBlue;
	penBlue.CreatePen(PS_SOLID,3,RGB(0,0,255));
	strDisplay.Format ("Current number:%d",pDoc->m_iCount);
	pDC->SetTextColor(RGB(0,255,0));
	pDC->SelectObject(&penBlue);
	pDC->Rectangle(50,50,280,180);
	pDC->TextOut(100,100,strDisplay);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CCountView printing

BOOL CCountView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CCountView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CCountView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CCountView diagnostics

#ifdef _DEBUG
void CCountView::AssertValid() const
{
	CView::AssertValid();
}

void CCountView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCountDoc* CCountView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCountDoc)));
	return (CCountDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCountView message handlers

void CCountView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	SetTimer(1,100,NULL);
	
	CView::OnLButtonDown(nFlags, point);
}

void CCountView::OnRButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	KillTimer(1);
	CView::OnRButtonDown(nFlags, point);
}

void CCountView::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
    CCountDoc *pDoc=GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->m_iCount++;
	Invalidate();
	CView::OnTimer(nIDEvent);
}
