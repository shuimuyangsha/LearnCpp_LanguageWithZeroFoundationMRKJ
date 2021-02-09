#include <iostream>
using namespace std;
#include <stdlib.h>
#include "winsock2.h"	
#include <time.h>									//引用头文件
#pragma comment (lib,"ws2_32.lib")	

void main()
{

	WSADATA wsd;								//定义WSADATA对象
	WSAStartup(MAKEWORD(2, 2), &wsd);
	SOCKET  	m_SockClient;
	sockaddr_in clientaddr;

	clientaddr.sin_family = AF_INET;					//设置服务器地址家族
	clientaddr.sin_port = htons(4600);					//设置服务器端口号
	clientaddr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
	m_SockClient = socket(AF_INET, SOCK_STREAM, 0);
	int i = connect(m_SockClient, (sockaddr*)&clientaddr, sizeof(clientaddr));	//连接超时
	cout << "connect" << i << endl;

	char buffer[1024];
	char inBuf[1024];
	int num;
	num = recv(m_SockClient, buffer, 1024, 0);				//阻塞
	if (num > 0)
	{
		cout << "Receive form server" << buffer << endl;	//欢迎信息
		while (1)
		{
			num = 0;
			cin >> inBuf;
			if (!strcmp(inBuf, "exit"))
			{
				send(m_SockClient, inBuf, sizeof(inBuf), 0);	//发送退出指令
				return;
			}
			send(m_SockClient, inBuf, sizeof(inBuf), 0);
			num = recv(m_SockClient, buffer, 1024, 0);		//接收客户端发送过来的数据
			if (num >= 0)
				cout << "Receive form server" << buffer << endl;
		}
	}
}
