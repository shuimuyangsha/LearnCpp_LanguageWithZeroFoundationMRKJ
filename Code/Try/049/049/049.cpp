// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  使用for循环，判数某个输入的数，是否是素数。
*/

using namespace std;

int main(int argc, char* argv[])
{
	int input;
	int flag = 1;
	cout << "请输入一个大于2的整数:" << endl;
	cin >> input;
	for (int i = 2; i < (1 + input / 2) && (flag == 1); ++i) {
		if (input % i == 0) {
			cout << input << "不是素数" << endl;
			flag = 0;
		}
	}

	if (flag == 1) {
		cout << input << "是素数" << endl;
	}
	return 0;
}

