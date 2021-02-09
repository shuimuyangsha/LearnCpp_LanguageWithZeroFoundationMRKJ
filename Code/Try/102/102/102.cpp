// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  一个3*3的网格，将从1到9的数字放入方格，达到能够使得每行每列以及每个对角线的值相加都相同。（提示：矩阵中心的元素为5）
  4、9、2
  3、5、7
  8、1、6


 */

using namespace std;
int main(int argc, char* argv[])
{
	int array[3][3] = {
	  4,9,2,
	  3,5,7,
	  8,1,6
	};
	for (int row = 0; row < 3; ++row) {
		for (int col = 0; col < 3; ++col) {
			cout << array[row][col] << " ";
		}
		cout << endl;
	}
	return 0;
}
