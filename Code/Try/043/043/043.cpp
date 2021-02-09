// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  输入一个浮点数，如果是正数，则向下取整，如果是负数，则向上取整，
  如输入的是4.5，则输出4，如果入是的-4.5，则输出-4。
*/
using namespace std;
int main(int argc, char* argv[])
{
	float val;
	cin >> val;
	if (val >= 0) {
		cout << (int)val << endl;
	}
	else {
		cout << (int)val << endl;
	}
	return 0;
}

