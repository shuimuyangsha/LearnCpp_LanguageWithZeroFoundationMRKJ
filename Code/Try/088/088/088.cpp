// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  银行输入密码取钱，输入正确方能取钱，正确的密码为574824
*/

using namespace std;
int main(int argc, char* argv[])
{
	char password[] = { "574824" };
	while (1) {
		char input[1024];
		cin >> input;
		if (0 == strcmp(password, input)) {
			cout << "密码正确，可以取钱。" << endl;
			break;
		}
		else {
			cout << "密码不正确，请重新输入：" << endl;
		}
	}
	return 0;
}
