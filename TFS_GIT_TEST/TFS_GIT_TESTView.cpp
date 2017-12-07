
// TFS_GIT_TESTView.cpp : CTFS_GIT_TESTView 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "TFS_GIT_TEST.h"
#endif

#include "TFS_GIT_TESTDoc.h"
#include "TFS_GIT_TESTView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTFS_GIT_TESTView

IMPLEMENT_DYNCREATE(CTFS_GIT_TESTView, CView)

BEGIN_MESSAGE_MAP(CTFS_GIT_TESTView, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CTFS_GIT_TESTView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CTFS_GIT_TESTView 생성/소멸

CTFS_GIT_TESTView::CTFS_GIT_TESTView()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CTFS_GIT_TESTView::~CTFS_GIT_TESTView()
{
}

BOOL CTFS_GIT_TESTView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CTFS_GIT_TESTView 그리기

void CTFS_GIT_TESTView::OnDraw(CDC* /*pDC*/)
{
	CTFS_GIT_TESTDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CTFS_GIT_TESTView 인쇄


void CTFS_GIT_TESTView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CTFS_GIT_TESTView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CTFS_GIT_TESTView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CTFS_GIT_TESTView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}

void CTFS_GIT_TESTView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CTFS_GIT_TESTView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CTFS_GIT_TESTView 진단

#ifdef _DEBUG
void CTFS_GIT_TESTView::AssertValid() const
{
	CView::AssertValid();
}

void CTFS_GIT_TESTView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTFS_GIT_TESTDoc* CTFS_GIT_TESTView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTFS_GIT_TESTDoc)));
	return (CTFS_GIT_TESTDoc*)m_pDocument;
}
#endif //_DEBUG


// CTFS_GIT_TESTView 메시지 처리기
