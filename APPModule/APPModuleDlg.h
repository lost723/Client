
// APPModuleDlg.h : ͷ�ļ�
//

#pragma once
#include "OrderDlg.h"

// CAPPModuleDlg �Ի���
class CAPPModuleDlg : public CDialogEx
{
// ����
public:
	CAPPModuleDlg(CWnd* pParent = NULL);	// ��׼���캯��
	~CAPPModuleDlg();	// ��׼���캯��
	COrderDlg * dlg;
// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_APPMODULE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
