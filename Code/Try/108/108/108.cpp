// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义函数display，该函数可以显示传入的字符串的值，但是不能改变字符串的
  内容。
*/

using namespace std;

void display(char const * str) {
	cout << str << endl;
	// 下面一行发生编译错误：
	//*str = 'a'; /*error C2166: l-value specifies const object*/
}

int main(int argc, char* argv[])
{
	char const *str = "hello, welcome to mingrisoft.";
	display(str);
	return 0;
}
