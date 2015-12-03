// CalculatorDlg.h : header file
//

#if !defined(AFX_CALCULATORDLG_H__47B5F153_9C9C_44C8_8AB5_D7B7450629F0__INCLUDED_)
#define AFX_CALCULATORDLG_H__47B5F153_9C9C_44C8_8AB5_D7B7450629F0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CCalculatorDlg dialog

class CCalculatorDlg : public CDialog
{
// Construction
public:
	CCalculatorDlg(CWnd* pParent = NULL);	// standard constructor
    int m_nOP;
	double m_fResult;
// Dialog Data
	//{{AFX_DATA(CCalculatorDlg)
	enum { IDD = IDD_CALCULATOR_DIALOG };
	double	m_fInput;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCalculatorDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CCalculatorDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnSetfocusInput();
	afx_msg void OnAdd();
	afx_msg void OnCalc();
	afx_msg void OnClear();
	afx_msg void OnDiv();
	afx_msg void OnMul();
	afx_msg void OnReciprocal();
	afx_msg void OnSqrt();
	afx_msg void OnSub();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CALCULATORDLG_H__47B5F153_9C9C_44C8_8AB5_D7B7450629F0__INCLUDED_)
