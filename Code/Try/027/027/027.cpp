// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;
/*
  ��������ֵ�ľ���ֵ��
*/

int main(int argc, char* argv[])
{
	int input;
	cin >> input;
	if (input >= 0) {
		printf("%d �ľ���ֵΪ:%d\n", input, input);
	}
	else {
		printf("%d �ľ���ֵΪ:%d\n", input, -input);
	}
	return 0;
}
