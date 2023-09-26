// gp018View.cpp : implementation of the CGp018View class
//

#include "stdafx.h"
#include "gp018.h"

#include "gp018Doc.h"
#include "gp018View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGp018View

IMPLEMENT_DYNCREATE(CGp018View, CScrollView)

BEGIN_MESSAGE_MAP(CGp018View, CScrollView)
	//{{AFX_MSG_MAP(CGp018View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CScrollView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGp018View construction/destruction

CGp018View::CGp018View()
{
	// TODO: add construction code here

}

CGp018View::~CGp018View()
{
}

BOOL CGp018View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CScrollView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CGp018View drawing
extern BITMAPINFO* lpBitsInfo;//外部声明
void CGp018View::OnDraw(CDC* pDC)//绘图
{
	CGp018Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	//调用windowsapi接口函数
	//指针拿过来作为参数

	if (NULL == lpBitsInfo)
		return;
	//函数调用

	void* lpBits = &lpBitsInfo->bmiColors[lpBitsInfo->bmiHeader.biClrUsed];
	StretchDIBits(pDC->GetSafeHdc(),
		0,0, lpBitsInfo->bmiHeader.biWidth,lpBitsInfo->bmiHeader.biHeight,
		0,0, lpBitsInfo->bmiHeader.biWidth,lpBitsInfo->bmiHeader.biHeight,//一比一显示
		lpBits,lpBitsInfo,
		DIB_RGB_COLORS,//常数
		SRCCOPY);//覆盖
	// TODO: add draw code for native data here
}

void CGp018View::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	// TODO: calculate the total size of this view
	sizeTotal.cx = sizeTotal.cy = 100;
	SetScrollSizes(MM_TEXT, sizeTotal);
}

/////////////////////////////////////////////////////////////////////////////
// CGp018View printing

BOOL CGp018View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CGp018View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CGp018View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CGp018View diagnostics

#ifdef _DEBUG
void CGp018View::AssertValid() const
{
	CScrollView::AssertValid();
}

void CGp018View::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}

CGp018Doc* CGp018View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGp018Doc)));
	return (CGp018Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CGp018View message handlers
