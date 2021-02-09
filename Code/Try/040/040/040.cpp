// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
交通灯共有三种种颜色红绿黄，用123分别代表三种颜色，当输入一个数字时，打印出当
前交通灯的状态，如输入数字1，输出"红灯停"，输入数字2，输出"绿灯行"。
*/

using namespace std;
int main(int argc, char* argv[])
{
	int state;
	cout << "请输入1、2或3" << endl;
	cin >> state;
	switch (state) {
	case 1: {
		cout << "红灯停" << endl;
		break;
	}
	case 2: {
		cout << "绿灯行" << endl;
		break;
	}
	case 3: {
		cout << "黄灯缓行" << endl;
		break;
	}
	default: {
		cout << "输入数字不正确,请输入1、2或3" << endl;
		break;
	}
	}
	return 0;
}

