// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  利用循环求斐波那契数。
*/

using namespace std;

int fib(int n) {
	int n_1 = 1;
	int n_2 = 1;
	if (n == 1)
		return n_1;
	if (n == 2)
		return n_2;
	for (int i = 3; i <= n; ++i) {
		int temp = n_1;
		n_1 = n_2;
		n_2 = temp + n_2;
	}

	return n_2;
}


int main(int argc, char* argv[])
{
	int n = 10;
	cout << "fib(" << n << ") = " << fib(n) << endl;
	return 0;
}
