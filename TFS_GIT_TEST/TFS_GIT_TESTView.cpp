
// TFS_GIT_TESTView.cpp : CTFS_GIT_TESTView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
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
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CTFS_GIT_TESTView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CTFS_GIT_TESTView ����/�Ҹ�

CTFS_GIT_TESTView::CTFS_GIT_TESTView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CTFS_GIT_TESTView::~CTFS_GIT_TESTView()
{
}

BOOL CTFS_GIT_TESTView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CTFS_GIT_TESTView �׸���

void CTFS_GIT_TESTView::OnDraw(CDC* /*pDC*/)
{
	CTFS_GIT_TESTDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CTFS_GIT_TESTView �μ�


void CTFS_GIT_TESTView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CTFS_GIT_TESTView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CTFS_GIT_TESTView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CTFS_GIT_TESTView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
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


// CTFS_GIT_TESTView ����

#ifdef _DEBUG
void CTFS_GIT_TESTView::AssertValid() const
{
	CView::AssertValid();
}

void CTFS_GIT_TESTView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTFS_GIT_TESTDoc* CTFS_GIT_TESTView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTFS_GIT_TESTDoc)));
	return (CTFS_GIT_TESTDoc*)m_pDocument;
}
#endif //_DEBUG


// CTFS_GIT_TESTView �޽��� ó����
