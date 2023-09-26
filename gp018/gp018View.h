// gp018View.h : interface of the CGp018View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_GP018VIEW_H__EE3B2181_087B_4D25_9FBD_8AB0BDFBCDFA__INCLUDED_)
#define AFX_GP018VIEW_H__EE3B2181_087B_4D25_9FBD_8AB0BDFBCDFA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CGp018View : public CScrollView
{
protected: // create from serialization only
	CGp018View();
	DECLARE_DYNCREATE(CGp018View)

// Attributes
public:
	CGp018Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGp018View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CGp018View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CGp018View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in gp018View.cpp
inline CGp018Doc* CGp018View::GetDocument()
   { return (CGp018Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GP018VIEW_H__EE3B2181_087B_4D25_9FBD_8AB0BDFBCDFA__INCLUDED_)
