// CountDoc.h : interface of the CCountDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_COUNTDOC_H__30729F36_6918_45DC_A42E_2758BD10B751__INCLUDED_)
#define AFX_COUNTDOC_H__30729F36_6918_45DC_A42E_2758BD10B751__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCountDoc : public CDocument
{
protected: // create from serialization only
	CCountDoc();
	DECLARE_DYNCREATE(CCountDoc)

// Attributes
public:
	int m_iCount;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCountDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCountDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCountDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COUNTDOC_H__30729F36_6918_45DC_A42E_2758BD10B751__INCLUDED_)
