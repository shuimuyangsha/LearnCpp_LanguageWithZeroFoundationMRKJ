// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ʹ���������ʽ�ж�һ�������Ƿ����ܱ�9527������ż����
*/
using namespace std;
int main(int argc, char* argv[])
{

	int val;
	cin >> val;
	(val % 9527 == 0 && val % 2 == 0)
		? cout << val << "��\"�ܱ�9527������ż��\""
		: cout << val << "����\"�ܱ�9527������ż��\""
		<< endl;
	return 0;
}

