// Try.cpp : Defines the entry point for the console application.
//


#include <iostream>

#include "Try.h"
/*
  声明用户账户类，将修改密码方法设为私有，在声明管理员类，管理员类有一个用户账户
  类的友元函数，通过此函数也可以修改用户密码。
*/

using namespace std;

CAccount::CAccount(const char * password) {
	strcpy(pass, password);
}

void CAccount::OutputPassword() {
	cout << pass << endl;
}

void CManager::SetPassword(CAccount& acc, const char * password) {
	strcpy(acc.pass, password);
}


int main(int argc, char* argv[])
{
	CAccount acc("123456");
	acc.OutputPassword();

	CManager admin;
	admin.SetPassword(acc, "www.mingrisoft.com");
	acc.OutputPassword();
	return 0;
}
