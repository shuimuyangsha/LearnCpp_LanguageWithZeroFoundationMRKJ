// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ��֪�ַ������ԡ�\0����β���ַ����飬��дһ�����������Ը�����һ���ԣ�����һ��
  �ַ����ĳ��ȣ���������������\0������
*/

using namespace std;

int my_strlen(const char * str) {
	int len = 0;
	const char *p = str;
	while (*p++);  // ��ָ���ƶ���ĩβ
	p--; // �ƶ����ַ���������'\0'
	return p - str;
}

int main(int argc, char* argv[])
{
	cout << my_strlen("mingrisoft.com") << endl;
	cout << strlen("mingrisoft.com") << endl;
	return 0;
}
