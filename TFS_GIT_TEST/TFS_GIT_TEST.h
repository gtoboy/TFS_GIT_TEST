
// TFS_GIT_TEST.h : TFS_GIT_TEST ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CTFS_GIT_TESTApp:
// �� Ŭ������ ������ ���ؼ��� TFS_GIT_TEST.cpp�� �����Ͻʽÿ�.
//

class CTFS_GIT_TESTApp : public CWinAppEx
{
public:
	CTFS_GIT_TESTApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CTFS_GIT_TESTApp theApp;
