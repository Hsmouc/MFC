// satelliteDoc.cpp : implementation of the CSatelliteDoc class
//

#include "stdafx.h"
#include "satellite.h"

#include "satelliteDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSatelliteDoc

IMPLEMENT_DYNCREATE(CSatelliteDoc, CDocument)

BEGIN_MESSAGE_MAP(CSatelliteDoc, CDocument)
	//{{AFX_MSG_MAP(CSatelliteDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSatelliteDoc construction/destruction

CSatelliteDoc::CSatelliteDoc()
{
	// TODO: add one-time construction code here

}

CSatelliteDoc::~CSatelliteDoc()
{
}

BOOL CSatelliteDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;
	m_radiiDoc=0.0;
	m_radiiDocx=0.0;
	m_widthDoc=0.0;
	m_widthDocx=0.0;
	m_speed=0.0;
	m_angle=0.0;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CSatelliteDoc serialization

void CSatelliteDoc::Serialize(CArchive& ar)
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
// CSatelliteDoc diagnostics

#ifdef _DEBUG
void CSatelliteDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSatelliteDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSatelliteDoc commands
