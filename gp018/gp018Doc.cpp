// gp018Doc.cpp : implementation of the CGp018Doc class
//

#include "stdafx.h"
#include "gp018.h"

#include "gp018Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGp018Doc

IMPLEMENT_DYNCREATE(CGp018Doc, CDocument)

BEGIN_MESSAGE_MAP(CGp018Doc, CDocument)
	//{{AFX_MSG_MAP(CGp018Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGp018Doc construction/destruction

CGp018Doc::CGp018Doc()
{
	// TODO: add one-time construction code here

}

CGp018Doc::~CGp018Doc()
{
}

BOOL CGp018Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CGp018Doc serialization

void CGp018Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CGp018Doc diagnostics

#ifdef _DEBUG
void CGp018Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CGp018Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CGp018Doc commands
BOOL LoadBmpFile(char* BmpFileName);
BOOL CGp018Doc::OnOpenDocument(LPCTSTR lpszPathName) 
{
	if (!CDocument::OnOpenDocument(lpszPathName))
		return FALSE;
	
	// TODO: Add your specialized creation code here
	LoadBmpFile((char*) lpszPathName);
	return TRUE;
}
