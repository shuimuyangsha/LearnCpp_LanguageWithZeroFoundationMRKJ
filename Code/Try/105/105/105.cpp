// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ����һ����ά���飬����ʫ�������������ݸ�ֵ�ڶ�ά���飬Ȼ�����������ת�ã�
*/

using namespace std;
int main(int argc, char* argv[])
{
	char array[][64] = {
	  "���߲�������",
	  "����������",
	  "ҹ����������",
	  "����֪���١�"
	};

	char(*p)[64] = array;
	cout << *(p + 0) << endl;
	cout << *(p + 1) << endl;
	cout << *(p + 2) << endl;
	cout << *(p + 3) << endl;
	return 0;
}
