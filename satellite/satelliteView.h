// satelliteView.h : interface of the CSatelliteView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SATELLITEVIEW_H__3CCC12BC_3B66_4211_BD2D_4B15719944EB__INCLUDED_)
#define AFX_SATELLITEVIEW_H__3CCC12BC_3B66_4211_BD2D_4B15719944EB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSatelliteView : public CView
{
protected: // create from serialization only
	CSatelliteView();
	DECLARE_DYNCREATE(CSatelliteView)

// Attributes
public:
	CSatelliteDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSatelliteView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSatelliteView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSatelliteView)
	afx_msg void OnStart();
	afx_msg void OnStop();
	afx_msg void OnHigh();
	afx_msg void OnMedium();
	afx_msg void OnLow();
	afx_msg void OnWidth();
	afx_msg void OnRadii();
	afx_msg void OnColor();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in satelliteView.cpp
inline CSatelliteDoc* CSatelliteView::GetDocument()
   { return (CSatelliteDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SATELLITEVIEW_H__3CCC12BC_3B66_4211_BD2D_4B15719944EB__INCLUDED_)
