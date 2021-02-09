// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  使用条件表达式判断一个数字是否是能被9527整除的偶数。
*/
using namespace std;
int main(int argc, char* argv[])
{

	int val;
	cin >> val;
	(val % 9527 == 0 && val % 2 == 0)
		? cout << val << "是\"能被9527整除的偶数\""
		: cout << val << "不是\"能被9527整除的偶数\""
		<< endl;
	return 0;
}

