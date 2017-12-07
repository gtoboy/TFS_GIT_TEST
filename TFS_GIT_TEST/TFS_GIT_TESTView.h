
// TFS_GIT_TESTView.h : CTFS_GIT_TESTView Ŭ������ �������̽�
//

#pragma once


class CTFS_GIT_TESTView : public CView
{
protected: // serialization������ ��������ϴ�.
	CTFS_GIT_TESTView();
	DECLARE_DYNCREATE(CTFS_GIT_TESTView)

// Ư���Դϴ�.
public:
	CTFS_GIT_TESTDoc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~CTFS_GIT_TESTView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // TFS_GIT_TESTView.cpp�� ����� ����
inline CTFS_GIT_TESTDoc* CTFS_GIT_TESTView::GetDocument() const
   { return reinterpret_cast<CTFS_GIT_TESTDoc*>(m_pDocument); }
#endif

