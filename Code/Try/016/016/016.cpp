// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
/*
  ʹ��λ���������������������㡰1028 % 8���Ľ����
*/
using namespace std;
int main()
{
	/*
	  ȡģ����ת����λ���� (�ڲ���������������)
	  a % (2^n) �ȼ��� a & (2^n - 1)
	*/
	int a = 1028;
	cout << (a & (8 - 1)) << endl;
	return 0;
}