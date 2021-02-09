// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  写一个程序，接受用户输入然后输出，如（
  输入：Hello
  输出：Hello
  输入：mingrisoft.com
  输出：mingrisoft.com
  当用户输入时"exit"时，程序退出。
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

