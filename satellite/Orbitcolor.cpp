// Orbitcolor.cpp : implementation file
//

#include "stdafx.h"
#include "satellite.h"
#include "Orbitcolor.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// COrbitcolor

IMPLEMENT_DYNAMIC(COrbitcolor, CColorDialog)

COrbitcolor::COrbitcolor(COLORREF clrInit, DWORD dwFlags, CWnd* pParentWnd) :
	CColorDialog(clrInit, dwFlags, pParentWnd)
{
}


BEGIN_MESSAGE_MAP(COrbitcolor, CColorDialog)
	//{{AFX_MSG_MAP(COrbitcolor)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

