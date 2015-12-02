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
	CString  pangu_mac; //设备编号
	CString  pangu_ip;  //当前设备IP
	CString  pangu_version; //当前软件版本号
	CString  pangu_status; // 设备状态 0，1，2，。。。。。
	bool LoadSocketLib();
	bool SocketConnect();
	bool InitSocket();
};