// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  设计一个程序，该程序接受命令行参数，输出“您好，[输入的参数]”，如果没有参数，则输出“请入你的名字：”，然后退出程序。
*/

using namespace std;
int main(int argc, char* argv[])
{
	if (argc <= 1) {
		cout << "请输入您的名字" << endl;
	}
	else {
		cout << "您好:" << argv[1] << endl;
	}
	return 0;
}
