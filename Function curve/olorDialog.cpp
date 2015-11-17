// olorDialog.cpp : implementation file
//

#include "stdafx.h"
#include "Function curve.h"
#include "olorDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ColorDialog

IMPLEMENT_DYNAMIC(ColorDialog, CColorDialog)

ColorDialog::ColorDialog(COLORREF clrInit, DWORD dwFlags, CWnd* pParentWnd) :
	CColorDialog(clrInit, dwFlags, pParentWnd)
{
}


BEGIN_MESSAGE_MAP(ColorDialog, CColorDialog)
	//{{AFX_MSG_MAP(ColorDialog)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

