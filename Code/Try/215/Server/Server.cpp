
#include <iostream>
#include <stdlib.h>
#include "winsock2.h"                        //引用头文件
#pragma comment (lib,"ws2_32.lib")            //引用库文件
using namespace std;

//主函数
void main()
{
	WSADATA wsd;                        //定义WSADATA对象
	WSAStartup(MAKEWORD(2, 2), &wsd);
	SOCKET      m_SockServer;
	sockaddr_in serveraddr;
	sockaddr_in serveraddrfrom;
	SOCKET m_Server[20];

	serveraddr.sin_family = AF_INET;            //设置服务器地址家族
	serveraddr.sin_port = htons(4600);            //设置服务器端口号
	serveraddr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
	m_SockServer = socket(AF_INET, SOCK_STREAM, 0);
	bind(m_SockServer, (sockaddr*)&serveraddr, sizeof(serveraddr));
	int len = sizeof(sockaddr);
	listen(m_SockServer, 0);        //进行监听
	//建立连接
	SOCKET sockCli = accept(m_SockServer, (sockaddr*)&serveraddrfrom, &len);

	if (sockCli != INVALID_SOCKET) {
		// 接收
		char buffer[1024];
		int num = recv(sockCli, buffer, 1024, 0);                    //阻塞函数，等待接收内容
		buffer[1023] = '\0';
		cout << "来自客户端:" << buffer << endl;

		// 回送登录成功消息
		char sendBuffer[1024] = { "登录成功\0" };
		int ires = send(sockCli, sendBuffer, sizeof(sendBuffer), 0);    //回送信息
		cout << "发送完:" << WSAGetLastError() << endl;
	}
	shutdown(sockCli, SD_BOTH);
	closesocket(sockCli);
	WSACleanup();
}
