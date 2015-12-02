
#include "stdafx.h"
#include "WIFIModule.h"

WIFIModule::WIFIModule()
{
	pangu_ip = "";
	pangu_mac = "";
	pangu_version = "20151202v1.0";
}

WIFIModule::~WIFIModule()
{
}
bool WIFIModule::LoadSocketLib()
{
	WSADATA wsaData;
	int nResult;
	nResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (NO_ERROR != nResult)
	{
		AfxMessageBox(_T("��ʼ��WinSock2.2ʧ��! \n"));
		return false;
	}
	return true;
}
bool WIFIModule::InitSocket()
{
	m_socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (INVALID_SOCKET == m_socket)//�ͻ���socket��ʼ��ʧ��
	{
		WSACleanup();
		return false;
	}
	return true;

}
bool WIFIModule::SocketConnect()
{
	SOCKADDR_IN addrsock;
	addrsock.sin_family = AF_INET;
	addrsock.sin_addr.s_addr = inet_addr(DEFAULT_SERVERIP);
	addrsock.sin_port = htons(DEFAULT_PORT);
	int ret;
	ret = connect(m_socket, (LPSOCKADDR)&addrsock, sizeof(addrsock));
	if (SOCKET_ERROR == ret)//����ʧ��
	{
		closesocket(m_socket); //�ر��׽���
		return FALSE;
	}
	else
		return TRUE;
}

//����ע��


//��������


//�����¼�


//�����¼�

