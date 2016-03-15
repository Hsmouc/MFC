// SnakeDoc.cpp : implementation of the CSnakeDoc class
//

#include "stdafx.h"
#include "Snake.h"

#include "SnakeDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSnakeDoc

IMPLEMENT_DYNCREATE(CSnakeDoc, CDocument)

BEGIN_MESSAGE_MAP(CSnakeDoc, CDocument)
	//{{AFX_MSG_MAP(CSnakeDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSnakeDoc construction/destruction

CSnakeDoc::CSnakeDoc()
{
	// TODO: add one-time construction code here

}

CSnakeDoc::~CSnakeDoc()
{
}

BOOL CSnakeDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;
	snake[0].body_x = 10;
	snake[0].body_y = 10;
	snake[1].body_x = 11;
	snake[1].body_y = 10;
	snake[2].body_x = 12;
	snake[2].body_y = 10;
	snake[0].direction = 3;
	snake[0].length = 3;
	food.isfood = true;
	startFlag = false;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CSnakeDoc serialization

void CSnakeDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CSnakeDoc diagnostics

#ifdef _DEBUG
void CSnakeDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSnakeDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSnakeDoc commands


