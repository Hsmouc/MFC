// Cars.h : main header file for the CARS application
//

#if !defined(AFX_CARS_H__9BA6A8D0_9347_44EB_A65D_89C49AD62AC2__INCLUDED_)
#define AFX_CARS_H__9BA6A8D0_9347_44EB_A65D_89C49AD62AC2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CCarsApp:
// See Cars.cpp for the implementation of this class
//

class CCarsApp : public CWinApp
{
public:
	CCarsApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCarsApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CCarsApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CARS_H__9BA6A8D0_9347_44EB_A65D_89C49AD62AC2__INCLUDED_)
