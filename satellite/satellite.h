// satellite.h : main header file for the SATELLITE application
//

#if !defined(AFX_SATELLITE_H__E004A20C_F927_47CA_B6C1_ACAA102BDA26__INCLUDED_)
#define AFX_SATELLITE_H__E004A20C_F927_47CA_B6C1_ACAA102BDA26__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CSatelliteApp:
// See satellite.cpp for the implementation of this class
//

class CSatelliteApp : public CWinApp
{
public:
	CSatelliteApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSatelliteApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CSatelliteApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SATELLITE_H__E004A20C_F927_47CA_B6C1_ACAA102BDA26__INCLUDED_)
