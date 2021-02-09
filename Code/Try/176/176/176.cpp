// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义一个函数，该函数可以接受一个数组作为参数，并求得数组中所有元素之和（要求可
  以接整型数，浮点型数组和字符型数组）。
*/

using namespace std;

template<class T>
T sum(T array[], size_t size) {
	T ret = 0;
	for (int i = 0; i < size; ++i) {
		ret += array[i];
	}
	return ret;
}

int main(int argc, char* argv[])
{
	int   array_i[] = { 1,2,3,4 };
	float array_f[] = { 1.0f,2.0f,3.0f,4.0f };

	cout << "整数数组之和 = " << sum<int>(array_i, 4) << endl;
	cout << "float型数组之和 = " << sum<float>(array_f, 4) << endl;
	return 0;
}
