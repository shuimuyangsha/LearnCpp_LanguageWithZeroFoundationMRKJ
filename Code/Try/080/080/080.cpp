// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���ö�ά�����ӡ�����ġ���ͼ��
	*   *
	*   *   *
	*   *
	  *
*/

using namespace std;
int main(int argc, char* argv[])
{

	char ccArray[4][9] = {
	  {' ',' ','*',' ',' ',' ','*',' ',' '},
	  {'*',' ',' ',' ','*',' ',' ',' ','*'},
	  {' ',' ','*',' ',' ',' ','*',' ',' '},
	  {' ',' ',' ',' ','*',' ',' ',' ',' '}
	};
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 9; ++j) {
			cout << ccArray[i][j];
		}
		cout << '\n';
	}
	return 0;
}
