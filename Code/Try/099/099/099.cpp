// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  使用指针寻找字符串“Life is brief, and then you die, you know？”中第一个“,”的位置。
 */

using namespace std;
int main(int argc, char* argv[])
{
	char buf[] = { "Life is brief, and then you die, you know？" };
	char *p = buf;
	int index = 0;
	while (*p) {
		if (*(p + index) == ',') {
			break;
		}
		else {
			index++;
		}
	}
	cout << "第一个','的位置:" << index << endl;
	return 0;
}
