// Function curve.h : main header file for the FUNCTION CURVE application
//

#if !defined(AFX_FUNCTIONCURVE_H__740E3497_C27D_4425_BE51_E6F6DEE0C77B__INCLUDED_)
#define AFX_FUNCTIONCURVE_H__740E3497_C27D_4425_BE51_E6F6DEE0C77B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CFunctioncurveApp:
// See Function curve.cpp for the implementation of this class
//

class CFunctioncurveApp : public CWinApp
{
public:
	CFunctioncurveApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFunctioncurveApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CFunctioncurveApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FUNCTIONCURVE_H__740E3497_C27D_4425_BE51_E6F6DEE0C77B__INCLUDED_)
