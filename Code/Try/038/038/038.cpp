// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  已知一个灯泡并联3个开关，分别为开关1，开关2，开关3；
  另一串彩灯串联一个开关4;
  开关5和开关6并联一个白炽灯和节能灯;
  输入一个数字，代表按下了开关，输出哪个灯能亮？
*/

using namespace std;
int main(int argc, char* argv[])
{
	int input;
	cout << "请输入开关(1-6):" << endl;
	cin >> input;
	if (input == 1) {
		cout << "灯泡亮" << endl;
	}
	if (input == 2) {
		cout << "灯泡亮" << endl;
	}
	if (input == 3) {
		cout << "灯泡亮" << endl;
	}
	if (input == 4) {
		cout << "彩灯亮" << endl;
	}

	if (input == 5) {
		cout << "白炽灯亮" << endl;
		cout << "节能灯亮" << endl;
	}

	if (input == 6) {
		cout << "白炽灯亮" << endl;
		cout << "节能灯亮" << endl;
	}


	return 0;
}

