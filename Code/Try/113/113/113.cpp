// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���庯�����ú������Ը��ݺ������Ƶ��ú������������ú������������û�д˺�������
*/

using namespace std;

void login() {
	cout << "Login()" << endl;
}
void logout() {
	cout << "logout()" << endl;
}

void CallFunctionByName(const char * szFunName) {
	const char * array[] = { "login", "logout" };
	if (0 == strcmp(szFunName, array[0])) {
		login();
		return;
	}
	if (0 == strcmp(szFunName, array[1])) {
		logout();
		return;
	}
	cout << "û�д˺���:" << szFunName << endl;
}

int main(int argc, char* argv[])
{
	char input[1024];
	cout << "�����뺯������:" << endl;
	cin >> input;
	CallFunctionByName(input);
	return 0;
}
