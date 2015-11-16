// CarsDoc.cpp : implementation of the CCarsDoc class
//

#include "stdafx.h"
#include "Cars.h"

#include "CarsDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCarsDoc

IMPLEMENT_DYNCREATE(CCarsDoc, CDocument)

BEGIN_MESSAGE_MAP(CCarsDoc, CDocument)
	//{{AFX_MSG_MAP(CCarsDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCarsDoc construction/destruction

CCarsDoc::CCarsDoc()
{
	// TODO: add one-time construction code here

}

CCarsDoc::~CCarsDoc()
{
}

BOOL CCarsDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;
     m_rectCar=CRect(100,100,180,150);
	 int speed = 1;
	 m_boolNew=true;
	 m_Length=0;
	 m_Width=0;
	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CCarsDoc serialization

void CCarsDoc::Serialize(CArchive& ar)
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
// CCarsDoc diagnostics

#ifdef _DEBUG
void CCarsDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCarsDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCarsDoc commands
