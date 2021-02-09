// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  有如下二维数组:
  char ccArray[5][5] = {
  {'a','b','c','d','e'},
  {'b','a','8','d','d'},
  {'c','d','a','e','c'},
  {'d','j','f','a','b'},
  {'e','d','a','f','a'},
  };
  请编写程序打印出这个数组对角线（左上至右下）上的字符
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

