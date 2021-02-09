// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  使用goto语句和while语句实现3分钟倒计时计算过程。效果如2:59、2:58...
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

