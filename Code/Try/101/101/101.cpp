// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  交换二维数组
  int array [][] = {
	  { 8, 75, 23 },
	  { 21, 55, 34 },
	  { 15, 23, 20 }
  };的行列数据。
 */


using namespace std;
int main(int argc, char* argv[])
{
	int array[3][3] = {
	  { 8, 75, 23 },
	  { 21, 55, 34 },
	  { 15, 23, 20 }
	};

	{
		cout << "交换前:" << endl;
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				cout << array[i][j] << " ";
			}
			cout << endl;
		}
	}


	int(*p)[3] = array;
	for (int row = 0; row < 3; ++row) {
		for (int col = 0; col < row; ++col) {
			int tmp = *(*(p + row) + col);
			*(*(p + row) + col) = *(*(p + col) + row);
			*(*(p + col) + row) = tmp;
		}
	}
	{
		cout << "交换后:" << endl;
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				cout << array[i][j] << " ";
			}
			cout << endl;
		}
	}

	return 0;
}
