#if !defined(AFX_ORBITCOLOR_H__A24C5E35_D3B4_402F_8300_FC3803D30F20__INCLUDED_)
#define AFX_ORBITCOLOR_H__A24C5E35_D3B4_402F_8300_FC3803D30F20__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Orbitcolor.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// COrbitcolor dialog

class COrbitcolor : public CColorDialog
{
	DECLARE_DYNAMIC(COrbitcolor)

public:
	COrbitcolor(COLORREF clrInit = 0, DWORD dwFlags = 0,
			CWnd* pParentWnd = NULL);

protected:
	//{{AFX_MSG(COrbitcolor)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ORBITCOLOR_H__A24C5E35_D3B4_402F_8300_FC3803D30F20__INCLUDED_)
