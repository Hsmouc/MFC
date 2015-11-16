// Count.h : main header file for the COUNT application
//

#if !defined(AFX_COUNT_H__E3FE9F0C_06AC_4E2A_A168_BBF8B909D579__INCLUDED_)
#define AFX_COUNT_H__E3FE9F0C_06AC_4E2A_A168_BBF8B909D579__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CCountApp:
// See Count.cpp for the implementation of this class
//

class CCountApp : public CWinApp
{
public:
	CCountApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCountApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CCountApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COUNT_H__E3FE9F0C_06AC_4E2A_A168_BBF8B909D579__INCLUDED_)
