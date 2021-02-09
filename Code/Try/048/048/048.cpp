// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  模拟用户登录，如果用户输入密码错误，就要求用户反复输入，直到用户输入正确密码。
*/

using namespace std;
int main(int argc, char* argv[])
{
	int password = 123456;
	int input;
	do {
		cout << "请输入数字密码:" << endl;
		cin >> input;
	} while (input != password);

	if (input == password) {
		cout << "登录成功!" << endl;
	}
	return 0;
}

