// Try.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>
/*
  ��ȡ������������������
*/

#include <windows.h>
#include <winsock.h>
#include <string>
using namespace std;
#pragma comment(lib,"wsock32.lib")
int main(int argc, char* argv[])
{
	char szHostname[256] = "";
	struct hostent *pHostent = 0;
	WSADATA w;
	WSAStartup(0x0101, &w);//��һ�б�����ʹ���κ�SOCKET����ǰд��
	gethostname(szHostname, 256);
	string strHostname = szHostname;//�˴���ñ�������
	cout << strHostname << endl;

	WSACleanup();
	return 0;
}
