// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  访问数组中的值可以使用下标，也可以使用指针。假设a是一个数组，则使用下标的方式
  访问数组中的第5（从0开始）个元素的语法为“a[5]”，请尝试使用指针的方式访
  问第5个元素。
*/

using namespace std;
int main(int argc, char* argv[])
{
	int a[] = { 0,1,2,3,4,5,6,7,8,9,10 };
	cout << a[5] << endl;

	// 指针方式
	int *p = a;
	cout << *(p + 5) << endl;

	return 0;
}
