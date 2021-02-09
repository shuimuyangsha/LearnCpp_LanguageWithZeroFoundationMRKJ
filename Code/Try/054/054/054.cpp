// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  某剧院发售演出门票，演播厅观众席有4行，每行有10个座位。为了不影响观众视角，
  在发售门票时，屏蔽掉最左一列和最右一列的座位。
*/

using namespace std;
int main(int argc, char* argv[])
{
	for (int i = 1; i <= 4; ++i) {
		for (int j = 1; j <= 10; ++j) {
			if (j == 1 || j == 10) {
				continue;
			}
			cout << "可用坐位: " << i << "," << j << endl;
		}
	}
	return 0;
}

