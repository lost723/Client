
// APPModule.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CAPPModuleApp: 
// �йش����ʵ�֣������ APPModule.cpp
//

class CAPPModuleApp : public CWinApp
{
public:
	CAPPModuleApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CAPPModuleApp theApp;