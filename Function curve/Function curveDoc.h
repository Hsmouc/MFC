// Function curveDoc.h : interface of the CFunctioncurveDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_FUNCTIONCURVEDOC_H__71C82BD1_960A_44A4_8F87_AE619E94733A__INCLUDED_)
#define AFX_FUNCTIONCURVEDOC_H__71C82BD1_960A_44A4_8F87_AE619E94733A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CFunctioncurveDoc : public CDocument
{
protected: // create from serialization only
	CFunctioncurveDoc();
	DECLARE_DYNCREATE(CFunctioncurveDoc)

// Attributes
public:
	COLORREF m_brush;
	BOOL m_boolNew;
	int model;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFunctioncurveDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CFunctioncurveDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CFunctioncurveDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FUNCTIONCURVEDOC_H__71C82BD1_960A_44A4_8F87_AE619E94733A__INCLUDED_)
