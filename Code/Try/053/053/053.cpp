// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  某公司新建4*4个办公卡位，现只用第1排第3个和第3排第2个卡位被使用，在控
  制台输出尚未使用的新卡位。
*/

using namespace std;
int main(int argc, char* argv[])
{
	for (int i = 1; i <= 4; ++i) {
		for (int j = 1; j <= 4; ++j) {
			if (i == 1 && j == 3) {
				continue;
			}
			if (i == 3 && j == 2) {
				continue;
			}

			cout << "第" << i << "排第" << j << "个卡位未使用" << endl;
		}
	}
	return 0;
}

