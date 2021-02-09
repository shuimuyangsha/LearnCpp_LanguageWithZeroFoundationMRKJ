// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  己知字符串是以‘\0’结尾的字符数组，请写一个函数，可以根据这一特性，计算一个
  字符串的长度（不包括结束符‘\0’）。
*/

using namespace std;

int my_strlen(const char * str) {
	int len = 0;
	const char *p = str;
	while (*p++);  // 将指针移动到末尾
	p--; // 移动到字符串结束的'\0'
	return p - str;
}

int main(int argc, char* argv[])
{
	cout << my_strlen("mingrisoft.com") << endl;
	cout << strlen("mingrisoft.com") << endl;
	return 0;
}
