// Radii.cpp : implementation file
//

#include "stdafx.h"
#include "satellite.h"
#include "Radii.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Radii dialog


Radii::Radii(CWnd* pParent /*=NULL*/)
	: CDialog(Radii::IDD, pParent)
{
	//{{AFX_DATA_INIT(Radii)
	m_radii = 0;
	m_radiix = 0;
	//}}AFX_DATA_INIT
}


void Radii::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Radii)
	DDX_Text(pDX, IDC_EDIT1, m_radii);
	DDX_Text(pDX, IDC_EDIT2, m_radiix);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Radii, CDialog)
	//{{AFX_MSG_MAP(Radii)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Radii message handlers
