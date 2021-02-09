// Client.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <stdlib.h>
#include "winsock2.h"    
#include <time.h>                                    //引用头文件
#pragma comment (lib,"ws2_32.lib")   
using namespace std;

void main()
{
	WSADATA wsd;                                //定义WSADATA对象
	WSAStartup(MAKEWORD(2, 2), &wsd);
	SOCKET      m_SockClient;
	sockaddr_in clientaddr;

	clientaddr.sin_family = AF_INET;                    //设置服务器地址家族
	clientaddr.sin_port = htons(4600);                    //设置服务器端口号
	clientaddr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
	m_SockClient = socket(AF_INET, SOCK_STREAM, 0);
	int i = connect(m_SockClient, (sockaddr*)&clientaddr, sizeof(clientaddr));   //连接超时
	char buffer[1024];
	char inBuf[1024] = "hello";
	int num;
	send(m_SockClient, inBuf, sizeof(inBuf), 0);
	// 接收
	num = recv(m_SockClient, buffer, 1024, 0);                //阻塞
	if (num > 0) {
		buffer[1023] = '\0';
		cout << "Receive form server" << buffer << endl;    //欢迎信息
	}
	shutdown(m_SockClient, SD_BOTH);
	closesocket(m_SockClient);
}
