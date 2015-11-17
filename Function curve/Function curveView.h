// Function curveView.h : interface of the CFunctioncurveView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_FUNCTIONCURVEVIEW_H__B4E16966_1F54_4043_B5A2_4B4200B7043E__INCLUDED_)
#define AFX_FUNCTIONCURVEVIEW_H__B4E16966_1F54_4043_B5A2_4B4200B7043E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CFunctioncurveView : public CView
{
protected: // create from serialization only
	CFunctioncurveView();
	DECLARE_DYNCREATE(CFunctioncurveView)

// Attributes
public:
	CFunctioncurveDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFunctioncurveView)
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
	virtual ~CFunctioncurveView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CFunctioncurveView)
	afx_msg void OnInput();
	afx_msg void OnsinFunc();
	afx_msg void OncosFunc();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Function curveView.cpp
inline CFunctioncurveDoc* CFunctioncurveView::GetDocument()
   { return (CFunctioncurveDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FUNCTIONCURVEVIEW_H__B4E16966_1F54_4043_B5A2_4B4200B7043E__INCLUDED_)
