// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  有一个数组a[]保存了所有学生的成绩，写一个程序打印出所有及格的成绩。
  数组a[]的值如下：
  int a [5] = {59, 90, 45, 78, 20};
*/

using namespace std;
int main(int argc, char* argv[])
{

	int a[5] = { 59, 90, 45, 78, 20 };
	for (int i = 0; i < 5; ++i) {
		if (a[i] >= 60) {
			cout << "a[" << i << "] = " << a[i] << endl;
		}
	}
	return 0;
}

