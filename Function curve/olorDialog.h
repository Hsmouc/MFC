#if !defined(AFX_OLORDIALOG_H__666011B0_EABF_4A93_824F_D916C5C63D87__INCLUDED_)
#define AFX_OLORDIALOG_H__666011B0_EABF_4A93_824F_D916C5C63D87__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// olorDialog.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ColorDialog dialog

class ColorDialog : public CColorDialog
{
	DECLARE_DYNAMIC(ColorDialog)

public:
	ColorDialog(COLORREF clrInit = 0, DWORD dwFlags = 0,
			CWnd* pParentWnd = NULL);

protected:
	//{{AFX_MSG(ColorDialog)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_OLORDIALOG_H__666011B0_EABF_4A93_824F_D916C5C63D87__INCLUDED_)
