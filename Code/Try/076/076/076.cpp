// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  创建函数click()用于记录用户点击率，函数中定义static变量sum=0,
  每次调用此方法，sum的值都会加1，并输出此时sum的值。调用五次
  click()，查看此时点击量是多少。
*/

using namespace std;

int click() {
	static int num = 0;
	num++;
	cout << "当前点击量:" << num << endl;
	return num;
}


int main(int argc, char* argv[])
{
	for (int i = 0; i < 5; ++i) {
		click();
	}
	return 0;
}
