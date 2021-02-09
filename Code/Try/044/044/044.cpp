// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  判断输入的数字，是否是 1024、9528和 65536的公约数。
*/

using namespace std;
int main(int argc, char* argv[])
{
	int input;
	cin >> input;
	if (1024 % input == 0) {
		if (9528 % input == 0) {
			if (65536 % input == 0) {
				cout << "是1024、9528和65536的公约数" << endl;
				return 0;
			}
		}
	}

	cout << input << "不是1024、9528和65536的公约数" << endl;
	return 0;
}

