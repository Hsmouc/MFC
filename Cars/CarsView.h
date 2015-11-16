// CarsView.h : interface of the CCarsView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CARSVIEW_H__89846204_7D08_49FA_9AFF_0F46AB24B2E3__INCLUDED_)
#define AFX_CARSVIEW_H__89846204_7D08_49FA_9AFF_0F46AB24B2E3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCarsView : public CView
{
protected: // create from serialization only
	CCarsView();
	DECLARE_DYNCREATE(CCarsView)

// Attributes
public:
	CCarsDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCarsView)
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
	virtual ~CCarsView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCarsView)
	afx_msg void Onstart();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void Onstop();
	afx_msg void Onhigh();
	afx_msg void Onmedium();
	afx_msg void Onlow();
	afx_msg void OnMenuitem32777();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in CarsView.cpp
inline CCarsDoc* CCarsView::GetDocument()
   { return (CCarsDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CARSVIEW_H__89846204_7D08_49FA_9AFF_0F46AB24B2E3__INCLUDED_)
