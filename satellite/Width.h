#if !defined(AFX_WIDTH_H__051ED514_3951_4A2E_A16D_3A9EA269CD45__INCLUDED_)
#define AFX_WIDTH_H__051ED514_3951_4A2E_A16D_3A9EA269CD45__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Width.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Width dialog

class Width : public CDialog
{
// Construction
public:
	Width(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Width)
	enum { IDD = IDD_DIALOG2 };
	int		m_width;
	int		m_widthx;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Width)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Width)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WIDTH_H__051ED514_3951_4A2E_A16D_3A9EA269CD45__INCLUDED_)
