// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  写一个程序，该程序接受用户输入的考试成绩，保存在数组中，当用户输入“-1”，
  停止接受输入，并打印出平均成绩。
*/

using namespace std;
int main(int argc, char* argv[])
{
	int score[5];
	int total = 5;
	int count = 0;
	while (total--) {
		int input;
		cin >> input;
		if (input == -1) {
			break;
		}
		else {
			score[count++] = input;
		}
	}

	int sum = 0;
	for (int i = 0; i < count; ++i) {
		sum += score[i];
	}
	cout << "平均成绩:" << sum / (float)count << endl;
	return 0;
}
