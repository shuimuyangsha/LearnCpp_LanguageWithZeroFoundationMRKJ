// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义一个函数，该函数接受一个整型数组a和一个函数指针pFun，该函数可以根据
  pFun中指定的方式，对a中的元素进行输出。（
*/

using namespace std;

void display(int array[], int len, void(*p)(int aint)) {
	for (int i = 0; i < len; ++i) {
		// 直接把数组元素交给函数指针进行输出
		p(array[i]);
	}
}

void callback(int aint) {
	// 输出方式：自身相乘即输出平方
	cout << aint * aint << " ";
}
int main(int argc, char* argv[])
{
	int array[] = { 1,2,3,4,5,6 };
	display(array, 6, callback);
	cout << endl;
	return 0;
}
