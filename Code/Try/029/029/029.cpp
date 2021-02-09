// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  设计一个过关类的小游戏，根据输入的数字，直接进入对应的关卡。如，
  输入的是数字3，控制台输出"当前进入第三关"。
*/
using namespace std;

int main(int argc, char* argv[])
{
	int input;
	cout << "请输入关卡(整数[1-5]):" << endl;
	cin >> input;
	if (input == 1) {
		cout << "当前进入第一关" << endl;
	}
	else if (input == 2) {
		cout << "当前进入第二关" << endl;
	}
	else if (input == 3) {
		cout << "当前进入第三关" << endl;

	}
	else if (input == 4) {
		cout << "当前进入第四关" << endl;

	}
	else if (input == 5) {
		cout << "当前进入第五关" << endl;

	}
	else {
		cout << "请输入关卡(整数[1-5])" << endl;
	}
	return 0;
}

