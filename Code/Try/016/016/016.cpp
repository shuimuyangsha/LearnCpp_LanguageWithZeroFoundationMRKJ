// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
/*
  使用位移运算和算数运算符，计算“1028 % 8”的结果。
*/
using namespace std;
int main()
{
	/*
	  取模运算转化成位运算 (在不产生溢出的情况下)
	  a % (2^n) 等价于 a & (2^n - 1)
	*/
	int a = 1028;
	cout << (a & (8 - 1)) << endl;
	return 0;
}