// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  假设数字0表示灯泡没亮，数字1表示灯泡亮着，有6个灯泡排列成一行组成一个以为数
  组a{1,0,0,1,0,0}，查找倒数第一个亮着的灯泡位置，并显示该灯泡前一个灯泡是否亮着。
*/

using namespace std;
int main(int argc, char* argv[])
{
	int a[6] = { 1,0,0,1,0,0 };

	int indexLast;
	for (indexLast = 5; indexLast >= 0; indexLast--) {
		if (a[indexLast] == 1) {
			break;
		}
	}
	cout << "倒数第一个亮着的灯泡为:" << indexLast << endl;

	int *p = &a[indexLast];
	p--;
	if (*p == 1) {
		cout << "前一个灯泡亮着" << endl;
	}
	else {
		cout << "前一个灯泡没亮" << endl;
	}
	return 0;
}
