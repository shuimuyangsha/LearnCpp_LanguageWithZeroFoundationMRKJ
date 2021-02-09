// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
/*
  获取本地主机的IP地址。
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
	WSAStartup(0x0101, &w); //这一行必须在使用任何SOCKET函数前写
	gethostname(szHostname, 256);
	pHostent = gethostbyname(szHostname);
	const char *IP = inet_ntoa(*((struct in_addr *)pHostent->h_addr_list[0]));//此处获得本机IP
	cout <<"此电脑的IP地址是："<< IP << endl;

	WSACleanup();
	return 0;
}

