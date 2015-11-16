// CarsDoc.h : interface of the CCarsDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CARSDOC_H__B5943190_E842_4ED6_870E_4E0151EF9A34__INCLUDED_)
#define AFX_CARSDOC_H__B5943190_E842_4ED6_870E_4E0151EF9A34__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCarsDoc : public CDocument
{
protected: // create from serialization only
	CCarsDoc();
	DECLARE_DYNCREATE(CCarsDoc)

// Attributes
public:
   CRect m_rectCar;
   int speed;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCarsDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	int m_Width;
	int m_Length;
	BOOL m_boolNew;
	virtual ~CCarsDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCarsDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CARSDOC_H__B5943190_E842_4ED6_870E_4E0151EF9A34__INCLUDED_)
