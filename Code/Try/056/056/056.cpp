// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ʹ��goto����while���ʵ��3���ӵ���ʱ������̡�Ч����2:59��2:58...
*/

using namespace std;
int main(int argc, char* argv[])
{
	int minute = 2;
start:
	int second = 59;
	while (minute >= 0) {
		cout << minute << ":" << second << endl;
		second -= 1;
		if (second < 0) {
			minute -= 1;
			goto start;
		}
	}
	return 0;
}

