// OrderDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "APPModule.h"
#include "OrderDlg.h"
#include "afxdialogex.h"


// COrderDlg �Ի���

IMPLEMENT_DYNAMIC(COrderDlg, CDialogEx)

COrderDlg::COrderDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ORDER, pParent)
	, m_edit1(_T("ok"))
	, m_edit2(0)
{

}

COrderDlg::~COrderDlg()
{
}

void COrderDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_edit1);
	DDX_Text(pDX, IDC_EDIT2, m_edit2);
}


BEGIN_MESSAGE_MAP(COrderDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &COrderDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// COrderDlg ��Ϣ�������


void COrderDlg::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_edit1 = "u ok?";
	m_edit2 = 3;
	UpdateData(FALSE);
//	CDialogEx::OnOK();
}
