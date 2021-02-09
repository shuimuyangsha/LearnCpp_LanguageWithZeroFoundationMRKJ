// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  声明用户账户类，用于保存用户的账户名和密码，使用引用对成员变变量进行赋值。
*/

using namespace std;

class CAccount {
public:
	char username[64];
	char password[64];
};


int main(int argc, char* argv[])
{
	CAccount acc;
	CAccount& acc_ref = acc;
	strcpy(acc_ref.username, "admin");
	strcpy(acc_ref.password, "mingrisoft");

	cout << "username:" << acc.username << endl;
	cout << "password:" << acc.password << endl;

	return 0;
}
