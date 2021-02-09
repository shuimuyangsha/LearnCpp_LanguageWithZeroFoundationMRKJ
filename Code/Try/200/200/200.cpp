// Try.cpp : Defines the entry point for the console application.
//


#include <iostream>
using namespace std;
#include <sstream>

/*
  试着写一个函数，接受命令行参数，可以将输入的字符串转换成整数并输出。
*/

int ToInt(char * str) {
	std::istringstream iss(str);
	int i;
	iss >> i;
	return i;
}

int main(int argc, char* argv[])
{
	if (argc <= 1) {
		cout << "请输入一个参数:" << endl;
		return 0;
	}
	cout << "参数为:" << argv[1] << endl;
	cout << ToInt(argv[1]) << endl;
	return 0;
}
