// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  利用重载函数特性，定义函数concat，该函数接受两个相同类
  型（int、short、long、char*）的参数，然后打印出它们的连接形式，如：
  concat(1,2); 输出 12
  concat("I miss", "you") ; 输出 I miss you
*/

using namespace std;

void concat(int a, int b) {
	cout << a << b << endl;
}
void concat(const char * a, const char * b) {
	cout << a << b << endl;
}


int main(int argc, char* argv[])
{
	concat(1, 2);
	concat("I miss", " you");
	return 0;
}
