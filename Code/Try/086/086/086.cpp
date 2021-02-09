// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  张三使用支付宝淘宝买东西，可是忘记原来密码（abc67463878），所以重新
  设置密码（26478632aaa）。
 */

using namespace std;
int main(int argc, char* argv[])
{
	char password[1024];
	strcpy(password, "abc67463878");
	cout << "旧密码：" << password << endl;

	strcpy(password, "26478632aaa");
	cout << "新密码：" << password << endl;
	return 0;
}
