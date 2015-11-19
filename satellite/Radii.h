#if !defined(AFX_RADII_H__AA04E416_A436_47C6_BDB0_67BECD0806E5__INCLUDED_)
#define AFX_RADII_H__AA04E416_A436_47C6_BDB0_67BECD0806E5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Radii.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Radii dialog

class Radii : public CDialog
{
// Construction
public:
	Radii(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Radii)
	enum { IDD = IDD_DIALOG1 };
	int		m_radii;
	int		m_radiix;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Radii)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Radii)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RADII_H__AA04E416_A436_47C6_BDB0_67BECD0806E5__INCLUDED_)
