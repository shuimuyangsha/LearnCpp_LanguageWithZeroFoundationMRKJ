// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义一个能够求的模板函数，并重载该模板函数，使其可以比较字符串的大小。
*/

using namespace std;

template<class T>
T max(T a, T b) {
	return a > b ? a : b;
}

const char * max(const char *a, const char * b) {
	if (strcmp(a, b)) {
		return b;
	}
	else {
		return a;
	}
}

int main(int argc, char* argv[])
{
	cout << "最大值：" << max(10, 1) << endl;
	cout << "最大值：" << max('a', 'b') << endl;
	cout << "最大值：" << max("hi", "mr") << endl;
	return 0;
}
