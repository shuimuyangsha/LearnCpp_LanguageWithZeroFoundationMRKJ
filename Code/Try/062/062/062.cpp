// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ��д����fun��ʵ����ֵ�������ܡ�
*/

using namespace std;


void fun(int* a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(int argc, char* argv[])
{
	int a = 1;
	int b = 2;
	cout << "����ǰa=" << a << ", b=" << b << endl;
	fun(&a, &b);
	cout << "������a=" << a << ", b=" << b << endl;
	return 0;
}

