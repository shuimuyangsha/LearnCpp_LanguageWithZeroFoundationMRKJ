// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ������ά����
  int array [][] = {
	  { 8, 75, 23 },
	  { 21, 55, 34 },
	  { 15, 23, 20 }
  };���������ݡ�
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
		cout << "����ǰ:" << endl;
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
		cout << "������:" << endl;
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				cout << array[i][j] << " ";
			}
			cout << endl;
		}
	}

	return 0;
}
