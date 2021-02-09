#include<iostream>
using namespace std;
void main()
{
	int a = 4, b = 6, c = 8, res1, res2;                // 定义变量
	res1 = a, res2 = b + c;                           // 计算 res1和res2的值
	for (int i = 0, j = 0; i < 2; i++)                // 循环2次
	{
		printf("y=%d,x=%d\n", res1, res2);     // 输出res1和res2的值
	}
}
