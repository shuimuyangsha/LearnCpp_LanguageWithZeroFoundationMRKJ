// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  һ��3*3�����񣬽���1��9�����ַ��뷽�񣬴ﵽ�ܹ�ʹ��ÿ��ÿ���Լ�ÿ���Խ��ߵ�ֵ��Ӷ���ͬ������ʾ���������ĵ�Ԫ��Ϊ5��
  4��9��2
  3��5��7
  8��1��6


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
