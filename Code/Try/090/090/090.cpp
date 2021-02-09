// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  判断用户输入的密码是否是6位。
*/

using namespace std;
int main(int argc, char* argv[])
{
	char input[1024];
	while (1) {
		cout << "请输入一个6位的密码:" << endl;
		cin >> input;
		if (strlen(input) != 6) {
			cout << "密码必须是6位!" << endl;
		}
		else {
			cout << "密码符合要求" << endl;
			break;
		}
	}
	return 0;
}
