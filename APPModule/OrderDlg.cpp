// OrderDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "APPModule.h"
#include "OrderDlg.h"
#include "afxdialogex.h"


// COrderDlg 对话框

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


// COrderDlg 消息处理程序


void COrderDlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_edit1 = "u ok?";
	m_edit2 = 3;
	UpdateData(FALSE);
//	CDialogEx::OnOK();
}
