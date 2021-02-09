// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义函数，该函数可以根据函数名称调用函数，如果不存该函数，则输出“没有此函数”。
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
	cout << "没有此函数:" << szFunName << endl;
}

int main(int argc, char* argv[])
{
	char input[1024];
	cout << "请输入函数名称:" << endl;
	cin >> input;
	CallFunctionByName(input);
	return 0;
}
