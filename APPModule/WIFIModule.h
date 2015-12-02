#pragma once
#include <winsock2.h>
#include <MSWSock.h>
#pragma comment(lib,"ws2_32.lib")
#define DEFAULT_SERVERIP	"139.129.15.159"
#define DEFAULT_PORT		10000
class WIFIModule
{
public :
	WIFIModule();
	~WIFIModule();
	SOCKET m_socket;
private:
	CString  pangu_mac; //�豸���
	CString  pangu_ip;  //��ǰ�豸IP
	CString  pangu_version; //��ǰ����汾��
	CString  pangu_status; // �豸״̬ 0��1��2������������
	bool LoadSocketLib();
	bool SocketConnect();
	bool InitSocket();
};