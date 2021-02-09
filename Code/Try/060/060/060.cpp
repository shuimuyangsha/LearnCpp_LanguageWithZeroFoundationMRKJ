// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  5文钱可以买一只公鸡，3文钱可以买一只母鸡，1文钱可以买三只雏鸡，现在用
  100文钱买100只鸡，那么各有公鸡、母鸡、雏鸡多少只？
*/

using namespace std;
int main(int argc, char* argv[])
{
	// i,j,k代表鸡的数量
	for (int i = 0; i <= 100 / 5; i += 1) {      // 5文钱可以买一只公鸡,100文钱最多100/5支鸡
		for (int j = 0; j <= 100 / 3; j += 1) {    // 3文钱可以买一只母鸡,100文钱最多 100/3支鸡
			for (int k = 0; k <= 100 * 3; k += 3) {  // 1文钱可又三支雏鸡,雏鸡数量肯定是3的整数倍
				if (i + j + k == 100
					&& i * 5 + j * 3 + k / 3 == 100) {
					cout << i << ","
						<< j << ","
						<< k << endl;
				}
			}
		}
	}
	return 0;
}

