// satelliteDoc.h : interface of the CSatelliteDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SATELLITEDOC_H__190A4E1F_E3C9_4176_B5A2_4E1F38BF0344__INCLUDED_)
#define AFX_SATELLITEDOC_H__190A4E1F_E3C9_4176_B5A2_4E1F38BF0344__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSatelliteDoc : public CDocument
{
protected: // create from serialization only
	CSatelliteDoc();
	DECLARE_DYNCREATE(CSatelliteDoc)

// Attributes
public:
	float m_radiiDoc;
	float m_radiiDocx;
	float m_widthDoc;
	float m_widthDocx;
	float m_speed;
	float m_angle;
	COLORREF m_orbitColor;
	COLORREF m_satelliteColor;


// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSatelliteDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSatelliteDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSatelliteDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SATELLITEDOC_H__190A4E1F_E3C9_4176_B5A2_4E1F38BF0344__INCLUDED_)
