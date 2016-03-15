// SnakeDoc.h : interface of the CSnakeDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SNAKEDOC_H__F7036904_0CAB_4CE5_986D_BAA33A04CD9E__INCLUDED_)
#define AFX_SNAKEDOC_H__F7036904_0CAB_4CE5_986D_BAA33A04CD9E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSnakeDoc : public CDocument
{
protected: // create from serialization only
	CSnakeDoc();
	DECLARE_DYNCREATE(CSnakeDoc)

// Attributes
public:
	struct{
	int body_x;
	int body_y;
	int direction;
	int length;
	}snake[50];

	struct{
	int food_x;
	int food_y;
	bool isfood;
	}food;

	bool startFlag;

// Operations
public:
	bool isGameOver();
	void gameReset();
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSnakeDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSnakeDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSnakeDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SNAKEDOC_H__F7036904_0CAB_4CE5_986D_BAA33A04CD9E__INCLUDED_)
