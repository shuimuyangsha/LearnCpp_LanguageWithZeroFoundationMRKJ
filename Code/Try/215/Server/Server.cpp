
#include <iostream>
#include <stdlib.h>
#include "winsock2.h"                        //����ͷ�ļ�
#pragma comment (lib,"ws2_32.lib")            //���ÿ��ļ�
using namespace std;

//������
void main()
{
	WSADATA wsd;                        //����WSADATA����
	WSAStartup(MAKEWORD(2, 2), &wsd);
	SOCKET      m_SockServer;
	sockaddr_in serveraddr;
	sockaddr_in serveraddrfrom;
	SOCKET m_Server[20];

	serveraddr.sin_family = AF_INET;            //���÷�������ַ����
	serveraddr.sin_port = htons(4600);            //���÷������˿ں�
	serveraddr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
	m_SockServer = socket(AF_INET, SOCK_STREAM, 0);
	bind(m_SockServer, (sockaddr*)&serveraddr, sizeof(serveraddr));
	int len = sizeof(sockaddr);
	listen(m_SockServer, 0);        //���м���
	//��������
	SOCKET sockCli = accept(m_SockServer, (sockaddr*)&serveraddrfrom, &len);

	if (sockCli != INVALID_SOCKET) {
		// ����
		char buffer[1024];
		int num = recv(sockCli, buffer, 1024, 0);                    //�����������ȴ���������
		buffer[1023] = '\0';
		cout << "���Կͻ���:" << buffer << endl;

		// ���͵�¼�ɹ���Ϣ
		char sendBuffer[1024] = { "��¼�ɹ�\0" };
		int ires = send(sockCli, sendBuffer, sizeof(sendBuffer), 0);    //������Ϣ
		cout << "������:" << WSAGetLastError() << endl;
	}
	shutdown(sockCli, SD_BOTH);
	closesocket(sockCli);
	WSACleanup();
}
