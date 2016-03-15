// SnakeView.cpp : implementation of the CSnakeView class
//

#include "stdafx.h"
#include "Snake.h"

#include "SnakeDoc.h"
#include "SnakeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSnakeView

IMPLEMENT_DYNCREATE(CSnakeView, CView)

BEGIN_MESSAGE_MAP(CSnakeView, CView)
	//{{AFX_MSG_MAP(CSnakeView)
	ON_WM_KEYDOWN()
	ON_WM_TIMER()
	ON_WM_LBUTTONDOWN()
	ON_COMMAND(ID_Easy, OnEasy)
	ON_COMMAND(ID_Crazy, OnCrazy)
	ON_COMMAND(ID_Hard, OnHard)
	ON_COMMAND(ID_Normol, OnNormol)
	ON_COMMAND(ID_Start, OnStart)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSnakeView construction/destruction

CSnakeView::CSnakeView()
{
	// TODO: add construction code here

}

CSnakeView::~CSnakeView()
{
}

BOOL CSnakeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CSnakeView drawing

void CSnakeView::OnDraw(CDC* pDC)
{
	CSnakeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDC->TextOut(20,20,"Hsmouc");
	pDC->TextOut(20,50,"Ocean University of China");
	CBrush DrawBrush=(RGB(130,130,0));
	CBrush *Drawbrush=pDC->SelectObject(&DrawBrush);
	for(int i = 0 ; i <= pDoc->snake[0].length-1 ; i++){
		pDC->Rectangle(pDoc->snake[i].body_x*20,pDoc->snake[i].body_y*20,(pDoc->snake[i].body_x+1)*20,(pDoc->snake[i].body_y+1)*20);

	}
	pDC->SelectObject(DrawBrush);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CSnakeView printing

BOOL CSnakeView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CSnakeView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CSnakeView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CSnakeView diagnostics

#ifdef _DEBUG
void CSnakeView::AssertValid() const
{
	CView::AssertValid();
}

void CSnakeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSnakeDoc* CSnakeView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSnakeDoc)));
	return (CSnakeDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSnakeView message handlers

void CSnakeView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
	CSnakeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	switch(nChar){
		case VK_UP:
			if(pDoc->snake[0].direction != 2){
				pDoc->snake[0].direction = 1;
			}
			break;
		case VK_DOWN:
			if(pDoc->snake[0].direction != 1){
				pDoc->snake[0].direction = 2;
			}
			break;
		case VK_LEFT:
			if(pDoc->snake[0].direction != 4){
				pDoc->snake[0].direction = 3;
			}
			break;
		case VK_RIGHT:
			if(pDoc->snake[0].direction != 3){
				pDoc->snake[0].direction = 4;
			}
			break;
	}
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}

void CSnakeView::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	CDC *pDC = GetDC();
	CSnakeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CRect rectClient;
	GetClientRect(&rectClient);
	if(pDoc->snake[0].body_x*20 <= rectClient.left || pDoc->snake[0].body_x*20 >= rectClient.right || pDoc->snake[0].body_y*20 <= rectClient.top || pDoc->snake[0].body_y*20 >= rectClient.bottom){
		KillTimer(1);
		AfxMessageBox("233");
	}
	if(pDoc->snake[0].length > 3){
		for(int temp = pDoc->snake[0].length-1 ; temp > 0 ; temp--){
			if(pDoc->snake[0].body_x*20==pDoc->snake[temp].body_x*20 && pDoc->snake[0].body_y*20 == pDoc->snake[temp].body_y*20){
				KillTimer(1);
				AfxMessageBox("233");
			}
		}
	}
	pDC->SelectStockObject(WHITE_PEN);
	pDC->Rectangle(pDoc->snake[pDoc->snake[0].length-1].body_x*20,pDoc->snake[pDoc->snake[0].length-1].body_y*20,(pDoc->snake[pDoc->snake[0].length-1].body_x+1)*20,(pDoc->snake[pDoc->snake[0].length-1].body_y+1)*20);
	for(int i=pDoc->snake[0].length-1 ; i > 0 ; i--){
		pDoc->snake[i].body_x = pDoc->snake[i-1].body_x;
		pDoc->snake[i].body_y = pDoc->snake[i-1].body_y;
	}
	if(pDoc->snake[0].direction==1){
		pDoc->snake[0].body_y--;
	}
	if(pDoc->snake[0].direction==2){
		pDoc->snake[0].body_y++;
	}
	if(pDoc->snake[0].direction==3){
		pDoc->snake[0].body_x--;
	}
	if(pDoc->snake[0].direction==4){
		pDoc->snake[0].body_x++;
	}
	pDC->SelectStockObject(BLACK_PEN);

	CBrush DrawBrush = (RGB(130,130,0));
	CBrush *Drawbrush = pDC->SelectObject(&DrawBrush);
	pDC->Rectangle(pDoc->snake[0].body_x*20,pDoc->snake[0].body_y*20,(pDoc->snake[0].body_x+1)*20,(pDoc->snake[0].body_y+1)*20);
	pDC->SelectObject(DrawBrush);
	if(pDoc->snake[0].body_x*20 == pDoc->food.food_x*20 && pDoc->snake[0].body_y*20 == pDoc->food.food_y*20)
	{
		pDoc->snake[0].length++;
		pDoc->food.isfood = true;
		pDoc->snake[pDoc->snake[0].length-1].body_x = pDoc->snake[pDoc->snake[0].length-2].body_x;
		pDoc->snake[pDoc->snake[0].length-1].body_y = pDoc->snake[pDoc->snake[0].length-2].body_y;
	}
	if(pDoc->food.isfood == true)
	{
		srand((unsigned)time(NULL));
		do{
			for(int temp=pDoc->snake[0].length-1 ; temp >= 0 ; temp--)
				if(pDoc->snake[0].body_x*20 == pDoc->snake[temp].body_x*20 && pDoc->snake[0].body_y*20 == pDoc->snake[temp].body_y*20){
					pDoc->food.food_x=rand()%25;
					pDoc->food.food_y=rand()%25;
					for(temp=pDoc->snake[0].length-1 ; temp >= 0 ; temp--){
						if(pDoc->food.food_x*20 == pDoc->snake[temp].body_x*20 && pDoc->food.food_y*20 == pDoc->snake[temp].body_y*20){
							temp = pDoc->snake[0].length-1;
							pDoc->food.food_x=rand()%25;
							pDoc->food.food_y=rand()%25;
						}
					}
				}
		}while(pDoc->food.food_x*20 < 50 || pDoc->food.food_y*20 < 50 || pDoc->food.food_x*20 > rectClient.right-100 || pDoc->food.food_y*20 > rectClient.right-100);
		pDC->Rectangle(pDoc->food.food_x*20,pDoc->food.food_y*20,(pDoc->food.food_x+1)*20,(pDoc->food.food_y+1)*20);
		pDoc->food.isfood = false;
	}
	CView::OnTimer(nIDEvent);
}


void CSnakeView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default	
	CView::OnLButtonDown(nFlags, point);
}

void CSnakeView::OnEasy() 
{
	// TODO: Add your command handler code here
	CSnakeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if(pDoc->startFlag == true){
		SetTimer(1,400,NULL);
	}
}

void CSnakeView::OnCrazy() 
{
	// TODO: Add your command handler code here
	CSnakeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if(pDoc->startFlag == true){
		SetTimer(1,100,NULL);
	}
}

void CSnakeView::OnHard() 
{
	// TODO: Add your command handler code here
	CSnakeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if(pDoc->startFlag == true){
		SetTimer(1,200,NULL);
	}
}

void CSnakeView::OnNormol() 
{
	// TODO: Add your command handler code here
	CSnakeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if(pDoc->startFlag == true){
		SetTimer(1,300,NULL);
	}
}

void CSnakeView::OnStart() 
{
	// TODO: Add your command handler code here
	CSnakeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->startFlag = true;
	SetTimer(1,300,NULL); //normal	
}
