#pragma once


// COrderDlg �Ի���

class COrderDlg : public CDialogEx
{
	DECLARE_DYNAMIC(COrderDlg)

public:
	COrderDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~COrderDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ORDER };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString m_edit1;
	int m_edit2;
	afx_msg void OnBnClickedOk();
};
