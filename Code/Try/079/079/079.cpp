// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  �����¶�ά����:
  char ccArray[5][5] = {
  {'a','b','c','d','e'},
  {'b','a','8','d','d'},
  {'c','d','a','e','c'},
  {'d','j','f','a','b'},
  {'e','d','a','f','a'},
  };
  ���д�����ӡ���������Խ��ߣ����������£��ϵ��ַ�
*/

using namespace std;
int main(int argc, char* argv[])
{
	char ccArray[5][5] = {
	  {'a','b','c','d','e'},
	  {'b','a','8','d','d'},
	  {'c','d','a','e','c'},
	  {'d','j','f','a','b'},
	  {'e','d','a','f','a'},
	};
	int N = 5;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) {
				cout << ccArray[i][j] << endl;
			}
		}
	}
	return 0;
}

