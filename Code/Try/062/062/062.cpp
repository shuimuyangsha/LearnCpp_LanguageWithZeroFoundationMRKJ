// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  编写函数fun：实现两值交换功能。
*/

using namespace std;


void fun(int* a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(int argc, char* argv[])
{
	int a = 1;
	int b = 2;
	cout << "交换前a=" << a << ", b=" << b << endl;
	fun(&a, &b);
	cout << "交换后a=" << a << ", b=" << b << endl;
	return 0;
}

