#include <iostream>
using namespace std;
#include <stdlib.h>
#include "winsock2.h"	
#include <time.h>									//����ͷ�ļ�
#pragma comment (lib,"ws2_32.lib")	

void main()
{

	WSADATA wsd;								//����WSADATA����
	WSAStartup(MAKEWORD(2, 2), &wsd);
	SOCKET  	m_SockClient;
	sockaddr_in clientaddr;

	clientaddr.sin_family = AF_INET;					//���÷�������ַ����
	clientaddr.sin_port = htons(4600);					//���÷������˿ں�
	clientaddr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
	m_SockClient = socket(AF_INET, SOCK_STREAM, 0);
	int i = connect(m_SockClient, (sockaddr*)&clientaddr, sizeof(clientaddr));	//���ӳ�ʱ
	cout << "connect" << i << endl;

	char buffer[1024];
	char inBuf[1024];
	int num;
	num = recv(m_SockClient, buffer, 1024, 0);				//����
	if (num > 0)
	{
		cout << "Receive form server" << buffer << endl;	//��ӭ��Ϣ
		while (1)
		{
			num = 0;
			cin >> inBuf;
			if (!strcmp(inBuf, "exit"))
			{
				send(m_SockClient, inBuf, sizeof(inBuf), 0);	//�����˳�ָ��
				return;
			}
			send(m_SockClient, inBuf, sizeof(inBuf), 0);
			num = recv(m_SockClient, buffer, 1024, 0);		//���տͻ��˷��͹���������
			if (num >= 0)
				cout << "Receive form server" << buffer << endl;
		}
	}
}
