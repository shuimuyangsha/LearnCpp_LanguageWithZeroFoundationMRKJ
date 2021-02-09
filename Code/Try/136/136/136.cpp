// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义枚举类型，代表一年中的四个季节。
  给上面的“季节”枚举类型分别赋值。并用整型格式，输出四个季节的值。
*/

using namespace std;
int main(int argc, char* argv[])
{
	enum Season { spring, summer, fall, winter };

	cout << spring << endl;
	cout << summer << endl;
	cout << fall << endl;
	cout << winter << endl;

	return 0;
}
