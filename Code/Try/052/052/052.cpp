// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  有一口井深10米，一只蜗牛从井底向井口爬，白天向上爬二米，晚上向下滑一米，问
  多少天可以爬到井口？
*/

using namespace std;
int main(int argc, char* argv[])
{
	int day = 0;
	int flag = 1;
	int high = 0;
	while (high < 10) {
		day += 1;
		high += 2;
		if (high >= 10) {
			break;
		}
		high -= 1;
	}
	cout << "第" << day << "天爬到井口" << endl;
}

