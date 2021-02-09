// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  输入一个代表年份的数字，使用if判断该年份是否合法，
  之后使用条件表达式判断该年是否是闰年。
*/

using namespace std;
int main(int argc, char* argv[])
{
	int year;
	cin >> year;
	if (year <= 0) {
		cout << "输入不合法，请输入大于0的年份" << endl;
		return 0;
	}

	/*
	  能被4整除的大多是闰年；能被100整除而不能被400整除的年份不是闰年；
	*/
	((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		? cout << "是闰年" << endl
		: cout << "不是闰年" << endl;
	return 0;
}

