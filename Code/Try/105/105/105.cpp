// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  创建一个二维数组，将古诗《春晓》的内容赋值于二维数组，然后输出。（不转置）
*/

using namespace std;
int main(int argc, char* argv[])
{
	char array[][64] = {
	  "春眠不觉晓，",
	  "处处闻啼鸟。",
	  "夜来风雨声，",
	  "花落知多少。"
	};

	char(*p)[64] = array;
	cout << *(p + 0) << endl;
	cout << *(p + 1) << endl;
	cout << *(p + 2) << endl;
	cout << *(p + 3) << endl;
	return 0;
}
