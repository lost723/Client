
// APPModuleDlg.h : 头文件
//

#pragma once
#include "OrderDlg.h"

// CAPPModuleDlg 对话框
class CAPPModuleDlg : public CDialogEx
{
// 构造
public:
	CAPPModuleDlg(CWnd* pParent = NULL);	// 标准构造函数
	~CAPPModuleDlg();	// 标准构造函数
	COrderDlg * dlg;
// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_APPMODULE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
