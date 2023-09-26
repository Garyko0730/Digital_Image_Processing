// gp018.h : main header file for the GP018 application
//

#if !defined(AFX_GP018_H__175C7A24_9019_4462_ADAA_2374132E4AF0__INCLUDED_)
#define AFX_GP018_H__175C7A24_9019_4462_ADAA_2374132E4AF0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CGp018App:
// See gp018.cpp for the implementation of this class
//

class CGp018App : public CWinApp
{
public:
	CGp018App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGp018App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CGp018App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GP018_H__175C7A24_9019_4462_ADAA_2374132E4AF0__INCLUDED_)
