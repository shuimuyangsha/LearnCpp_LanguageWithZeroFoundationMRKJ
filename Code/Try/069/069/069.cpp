// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  设一对大兔子每月生一对小兔子，每对新生兔在出生一个月后又下崽，假若兔子都不死
  亡。问：一对兔子一年能繁殖成多少对兔子？。
*/

using namespace std;

/*
| month | 1 | 2 | 3 | 4 | 5 | 6 |  7 |  8 |  9 | 10 | 11 |  12 |
|-------+---+---+---+---+---+---+----+----+----+----+----+-----|
| big   | 1 | 1 | 2 | 3 | 5 | 8 | 13 | 21 | 34 | 55 | 89 | 144 |
| small | 0 | 1 | 1 | 2 | 3 | 5 |  8 | 13 | 21 | 34 | 55 |  89 |

第12个月免子的数量= 本月大免子的数量+本月小免子的数量
				 = 第13个月大免子的数量
*/


int calc(int month) {
	if (month == 1)       // 第 1 个月，只有一对儿大免子
		return 1;
	if (month == 2)     // 第 2 个月，只有一对儿大免子
		return 1;
	// 其它月份的免子数量= 上个月的免子数量+上上个月的免子数量
	return calc(month - 1) + calc(month - 2);
}


int main(int argc, char* argv[])
{
	int month = 12;
	cout << "第" << month << "个月的免子数量=" << calc(1 + month) << endl;
	return 0;
}
