// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ����ʹ��֧�����Ա���������������ԭ�����루abc67463878������������
  �������루26478632aaa����
 */

using namespace std;
int main(int argc, char* argv[])
{
	char password[1024];
	strcpy(password, "abc67463878");
	cout << "�����룺" << password << endl;

	strcpy(password, "26478632aaa");
	cout << "�����룺" << password << endl;
	return 0;
}
