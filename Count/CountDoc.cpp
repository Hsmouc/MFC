// CountDoc.cpp : implementation of the CCountDoc class
//

#include "stdafx.h"
#include "Count.h"

#include "CountDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCountDoc

IMPLEMENT_DYNCREATE(CCountDoc, CDocument)

BEGIN_MESSAGE_MAP(CCountDoc, CDocument)
	//{{AFX_MSG_MAP(CCountDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCountDoc construction/destruction

CCountDoc::CCountDoc()
{
	// TODO: add one-time construction code here

}

CCountDoc::~CCountDoc()
{
}

BOOL CCountDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;
	m_iCount=0;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CCountDoc serialization

void CCountDoc::Serialize(CArchive& ar)
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
// CCountDoc diagnostics

#ifdef _DEBUG
void CCountDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCountDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCountDoc commands
