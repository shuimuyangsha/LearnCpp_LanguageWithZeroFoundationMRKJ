// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  5��Ǯ������һֻ������3��Ǯ������һֻĸ����1��Ǯ��������ֻ������������
  100��Ǯ��100ֻ������ô���й�����ĸ������������ֻ��
*/

using namespace std;
int main(int argc, char* argv[])
{
	// i,j,k����������
	for (int i = 0; i <= 100 / 5; i += 1) {      // 5��Ǯ������һֻ����,100��Ǯ���100/5֧��
		for (int j = 0; j <= 100 / 3; j += 1) {    // 3��Ǯ������һֻĸ��,100��Ǯ��� 100/3֧��
			for (int k = 0; k <= 100 * 3; k += 3) {  // 1��Ǯ������֧����,���������϶���3��������
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

