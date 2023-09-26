// gp018Doc.h : interface of the CGp018Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_GP018DOC_H__87AF5860_931A_48A6_B9B1_05919124A345__INCLUDED_)
#define AFX_GP018DOC_H__87AF5860_931A_48A6_B9B1_05919124A345__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CGp018Doc : public CDocument
{
protected: // create from serialization only
	CGp018Doc();
	DECLARE_DYNCREATE(CGp018Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGp018Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CGp018Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CGp018Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GP018DOC_H__87AF5860_931A_48A6_B9B1_05919124A345__INCLUDED_)
