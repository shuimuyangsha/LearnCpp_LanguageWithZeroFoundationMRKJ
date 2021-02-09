// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  小红的生日为 11月29日，根据输入的日期（为一个数字），使用条件表达式判断这个
  数字是否是合法的日期，并判断输入的日期是否是小红的生日。
*/
using namespace std;

int main(int argc, char* argv[])
{
	int month, day;
	cout << "请输入月:" << endl;
	cin >> month;
	cout << "请输入日:" << endl;
	cin >> day;

	(month <= 0 || month > 12 || day <= 0 || day >= 30)
		? cout << "不是合法的日期"
		: (11 == month && 29 == day)
		? cout << "今天是小红的生日" << endl
		: cout << "今天不是小红的生日" << endl;

	return 0;
}

