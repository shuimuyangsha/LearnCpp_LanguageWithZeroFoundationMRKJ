// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���������е�ֵ����ʹ���±꣬Ҳ����ʹ��ָ�롣����a��һ�����飬��ʹ���±�ķ�ʽ
  ���������еĵ�5����0��ʼ����Ԫ�ص��﷨Ϊ��a[5]�����볢��ʹ��ָ��ķ�ʽ��
  �ʵ�5��Ԫ�ء�
*/

using namespace std;
int main(int argc, char* argv[])
{
	int a[] = { 0,1,2,3,4,5,6,7,8,9,10 };
	cout << a[5] << endl;

	// ָ�뷽ʽ
	int *p = a;
	cout << *(p + 5) << endl;

	return 0;
}
