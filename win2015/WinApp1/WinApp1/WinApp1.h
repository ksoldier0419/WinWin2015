
// WinApp1.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CWinApp1App:
// �� Ŭ������ ������ ���ؼ��� WinApp1.cpp�� �����Ͻʽÿ�.
//

class CWinApp1App : public CWinApp
{
public:
	CWinApp1App();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CWinApp1App theApp;