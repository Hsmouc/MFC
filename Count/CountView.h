// CountView.h : interface of the CCountView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_COUNTVIEW_H__5B5FC8E9_55E4_404A_8D59_D6B822603EA3__INCLUDED_)
#define AFX_COUNTVIEW_H__5B5FC8E9_55E4_404A_8D59_D6B822603EA3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCountView : public CView
{
protected: // create from serialization only
	CCountView();
	DECLARE_DYNCREATE(CCountView)

// Attributes
public:
	CCountDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCountView)
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
	virtual ~CCountView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCountView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in CountView.cpp
inline CCountDoc* CCountView::GetDocument()
   { return (CCountDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COUNTVIEW_H__5B5FC8E9_55E4_404A_8D59_D6B822603EA3__INCLUDED_)
