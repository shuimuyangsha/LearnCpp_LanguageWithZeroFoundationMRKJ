// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;
/*
  求输入数值的绝对值。
*/

int main(int argc, char* argv[])
{
	int input;
	cin >> input;
	if (input >= 0) {
		printf("%d 的绝对值为:%d\n", input, input);
	}
	else {
		printf("%d 的绝对值为:%d\n", input, -input);
	}
	return 0;
}
