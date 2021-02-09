// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <iomanip>

/*
  我国古代的乘法口诀表以"九九八十一"开始， 以"一一得一"结束，即顺序是倒过
  来的，请用程序输出"倒序"的乘法口诀表。
   9* 9 = 81 9*8=72 9*7=63 ...

*/

using namespace std;
int main(int argc, char* argv[])
{
	for (int i = 9; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			cout << setw(2) << i
				<< "*"
				<< setw(2) << j
				<< " = "
				<< setw(2) << i * j
				<< " ";
		}
		cout << endl;
	}
	return 0;
}

