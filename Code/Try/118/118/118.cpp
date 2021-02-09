// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  设计一个程序，该程序接受不定个数的整型参数，输出这些参数的和。
*/

using namespace std;
int main(int argc, char* argv[])
{
	int sum = 0;
	while (argc > 1) {
		sum += atoi(argv[argc - 1]);
		argc--;
	}
	cout << sum << endl;
	return 0;
}
