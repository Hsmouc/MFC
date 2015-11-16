// CarsDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Cars.h"
#include "CarsDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCarsDlg dialog


CCarsDlg::CCarsDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCarsDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCarsDlg)
	m_Width = 0;
	m_Length = 0;
	//}}AFX_DATA_INIT
}


void CCarsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCarsDlg)
	DDX_Text(pDX, IDC_EDIT1, m_Width);
	DDX_Text(pDX, IDC_EDIT2, m_Length);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CCarsDlg, CDialog)
	//{{AFX_MSG_MAP(CCarsDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCarsDlg message handlers
