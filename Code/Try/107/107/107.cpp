// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义函数to_up，该函数可以将传入的字符变为大写。
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
