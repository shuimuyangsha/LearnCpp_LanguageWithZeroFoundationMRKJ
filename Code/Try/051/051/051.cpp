// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  дһ�����򣬽����û�����Ȼ��������磨
  ���룺Hello
  �����Hello
  ���룺mingrisoft.com
  �����mingrisoft.com
  ���û�����ʱ"exit"ʱ�������˳���
*/

using namespace std;
int main(int argc, char* argv[])
{
	char buf[256];
	while (true) {
		cin >> buf;
		if (buf[0] == 'e' && buf[1] == 'x' && buf[2] == 'i' && buf[3] == 't') {
			break;
		}
		cout << buf << endl;
	}
	return 0;
}

