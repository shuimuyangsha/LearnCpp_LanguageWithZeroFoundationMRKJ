#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "winsock2.h"                        //����ͷ�ļ�
#pragma comment (lib,"ws2_32.lib")            //���ÿ��ļ�

using namespace std;
//������
void main()
{
	WSADATA wsd;                        //����WSADATA����
	WSAStartup(MAKEWORD(2, 2), &wsd);
	SOCKET      sockServer;
	sockaddr_in addrSrv;
	sockaddr_in addrCli;
	SOCKET m_Server[20];

	addrSrv.sin_family = AF_INET;            //���÷�������ַ����
	addrSrv.sin_port = htons(4600);          //���÷������˿ں�
	addrSrv.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
	sockServer = socket(AF_INET, SOCK_STREAM, 0);
	bind(sockServer, (sockaddr*)&addrSrv, sizeof(addrSrv));
	int len = sizeof(sockaddr);
	listen(sockServer, 0);        //���м���

	while (1) {
		//�ȴ��ͻ�������
		SOCKET sockCli = accept(sockServer, (sockaddr*)&addrCli, &len);
		// ����пͻ�������
		if (sockCli != INVALID_SOCKET) {
			const char * szFilename = "bj.mp3";
			cout << "���»���������,������Ƶ�ļ�" << szFilename << endl;
			ifstream ifs;
			ifs.open(szFilename, ifstream::binary);
			// ��ȡ�ļ�����
			int length = 0;
			{
				ifs.seekg(0, ifs.end); // �ƶ����ļ�β��
				length = ifs.tellg(); // ��ȡ����
				ifs.seekg(0, ifs.beg); // �ƶ����ļ�ͷ��
			}
			cout << "�ļ�����:" << length << endl;

			// ���������ļ�����
			char *pContent = new char[length];
			ifs.read(pContent, length);
			if (!ifs) {
				cout << "��ȡ�ļ�����" << endl;
				delete[] pContent;
			}
			// ���͵�¼�ɹ���Ϣ
			int ires = send(sockCli, pContent, length, 0);    //������Ϣ
			cout << "������:" << WSAGetLastError() << endl;
			// ɾ���ڴ�
			delete[] pContent;
		}
		// �ر�����
		shutdown(sockCli, SD_BOTH);
		closesocket(sockCli);
	}
	WSACleanup();
}
