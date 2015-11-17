// Function curveDoc.cpp : implementation of the CFunctioncurveDoc class
//

#include "stdafx.h"
#include "Function curve.h"

#include "Function curveDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CFunctioncurveDoc

IMPLEMENT_DYNCREATE(CFunctioncurveDoc, CDocument)

BEGIN_MESSAGE_MAP(CFunctioncurveDoc, CDocument)
	//{{AFX_MSG_MAP(CFunctioncurveDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFunctioncurveDoc construction/destruction

CFunctioncurveDoc::CFunctioncurveDoc()
{
	// TODO: add one-time construction code here

}

CFunctioncurveDoc::~CFunctioncurveDoc()
{
}

BOOL CFunctioncurveDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;
	m_boolNew = true;
	model=0;


	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CFunctioncurveDoc serialization

void CFunctioncurveDoc::Serialize(CArchive& ar)
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
// CFunctioncurveDoc diagnostics

#ifdef _DEBUG
void CFunctioncurveDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CFunctioncurveDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CFunctioncurveDoc commands
