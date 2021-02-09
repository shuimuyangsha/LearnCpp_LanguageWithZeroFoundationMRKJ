// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  写一个函数，该函数接受三个整型参数，调用此函数之后，三个参数的值会按照从小到达进行排序，例：
  int a = 3;
  int b = 9;
  int c = 1;
  // 调用函数
  sort_three(a,b,c);
  // 调用之后:
  // a = 1, b = 3, c = 9
*/
using namespace std;

// 交换两个数字
void swap(int& a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}
// 
void swap_if_max(int &a, int &b) {
	a > b ? swap(a, b) : swap(b, a);
}

void sort_three(int&a, int &b, int &c) {
	swap_if_max(a, b);
	swap_if_max(a, c);
	swap_if_max(b, c);
}


int main(int argc, char* argv[])
{
	int a = 3, b = 2, c = 1;
	cout << a << "," << b << "," << c << endl;
	sort_three(a, b, c);
	cout << a << "," << b << "," << c << endl;
	return 0;
}
