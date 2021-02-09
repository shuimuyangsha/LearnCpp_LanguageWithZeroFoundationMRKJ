// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  输入时间，当时间小于20时，会输出Good day，当时间为12时，
  输出Noon good ,否则会输出Good evening。
*/

using namespace std;
int main(int argc, char* argv[])
{
	int hour;
	cin >> hour;
	(hour < 20 && hour != 12)
		? cout << "Good day" << endl
		: (hour == 12)
		? cout << "Noon good" << endl
		: cout << "Good evening" << endl;
	return 0;
}

