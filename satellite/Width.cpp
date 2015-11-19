// Width.cpp : implementation file
//

#include "stdafx.h"
#include "satellite.h"
#include "Width.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Width dialog


Width::Width(CWnd* pParent /*=NULL*/)
	: CDialog(Width::IDD, pParent)
{
	//{{AFX_DATA_INIT(Width)
	m_width = 0;
	m_widthx = 0;
	//}}AFX_DATA_INIT
}


void Width::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Width)
	DDX_Text(pDX, IDC_EDIT2, m_width);
	DDX_Text(pDX, IDC_EDIT1, m_widthx);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Width, CDialog)
	//{{AFX_MSG_MAP(Width)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Width message handlers
