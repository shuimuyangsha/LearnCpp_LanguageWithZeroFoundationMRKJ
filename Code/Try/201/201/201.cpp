// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>
#include <string>

/*
  在程序设计，经常需要长期保存一些数据，如自动登录时，需要保存账号，请写一个程序
  ，该程序接受用户输入的账号，之后创建一个以账号为文件名的文件。
*/

using namespace std;
int main(int argc, char* argv[])
{
	string input;
	cin >> input;
	ofstream ofile;
	ofile.open(input.c_str());
	if (!ofile.fail()) {
		cout << "创建成功." << endl;
		ofile.close();
	}
	else {
		cout << "创建失败!" << endl;
	}
	return 0;
}
