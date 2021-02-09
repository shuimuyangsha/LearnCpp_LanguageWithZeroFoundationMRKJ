// Try.cpp : Defines the entry point for the console application.
//


#include <string>
#include <iostream>


/*
  在明日学院网站首页中，可以使用账户名登录，可以使用手机号登录，还可以使用电子邮箱地址登录。
  请判断某用户是否可以登录。（已知服务器中有如下记录，账户名：张三，手机号：1234567890，
  电子邮箱：zhangsan@163.com）。
*/

using namespace std;
int main(int argc, char* argv[])
{
	std::string input;
	cin >> input;

	if (input == "张三") {
		cout << "可以登录" << endl;
		return 0;
	}

	if (input == "1234567890") {
		cout << "可以登录" << endl;
		return 0;
	}

	if (input == "zhangsan@163.com") {
		cout << "可以登录" << endl;
		return 0;
	}

	cout << "不可以登录" << endl;
	return 0;
}

