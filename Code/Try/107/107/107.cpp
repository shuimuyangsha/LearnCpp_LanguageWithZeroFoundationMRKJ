// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���庯��to_up���ú������Խ�������ַ���Ϊ��д��
*/

using namespace std;

void to_up(char* c) {
	if (*c >= 'a' && *c <= 'z') {
		*c = *c - 32;
	}
}


int main(int argc, char* argv[])
{
	char c = 'a';
	to_up(&c);
	cout << c << endl;
	return 0;
}
