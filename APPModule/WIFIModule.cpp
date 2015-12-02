
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
		AfxMessageBox(_T("初始化WinSock2.2失败! \n"));
		return false;
	}
	return true;
}
bool WIFIModule::InitSocket()
{
	m_socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (INVALID_SOCKET == m_socket)//客户端socket初始化失败
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
	if (SOCKET_ERROR == ret)//连接失败
	{
		closesocket(m_socket); //关闭套接字
		return FALSE;
	}
	else
		return TRUE;
}

//发送注册


//发送心跳


//发送事件


//接收事件

