#if !defined(AFX_CARSDLG_H__4D337D96_4083_4409_B9ED_3F74A3F38BBD__INCLUDED_)
#define AFX_CARSDLG_H__4D337D96_4083_4409_B9ED_3F74A3F38BBD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// CarsDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCarsDlg dialog

class CCarsDlg : public CDialog
{
// Construction
public:
	CCarsDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CCarsDlg)
	enum { IDD = IDD_DIALOG1 };
	int		m_Width;
	int		m_Length;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCarsDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CCarsDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CARSDLG_H__4D337D96_4083_4409_B9ED_3F74A3F38BBD__INCLUDED_)
