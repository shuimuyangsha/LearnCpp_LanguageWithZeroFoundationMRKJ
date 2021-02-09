// Try.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <iomanip> // 重点要包含这个文件

/*
  向控制台输出圆周率，保留4位小数，并四舍五入（即3.1416）
*/


using namespace std; // 引入命名空间
int main(int argc, char* argv[])
{
	// 计算最终结果
	double pi = 3.1415926;
	// 保留4位小数,并四舍五入
	cout << fixed << setprecision(4) << pi << endl;
	return 0;
}

