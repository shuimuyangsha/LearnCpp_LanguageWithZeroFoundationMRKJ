// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;

/*
  定义一个函数"Add(int a, int b, int c) "，该函数计算前两个参数的和，并将和存储在第三个参数中。 请读者确认以目前的知识，能否实现该函数使其正确求和，为什么？
*/

void Add(int a, int b, int c) {
	c = a + b;
}

int main(int argc, char* argv[])
{
	int a = 1;
	int b = 2;
	int c = 0;
	Add(a, b, c);
	cout << c << endl;
	return 0;
}
/*
  函数参数为值传递，而不是变量“本身”，所以目前无法改变原变量的值。
  学到指针或引用时，可以通过指针和引用来改变参数的值。
 */

