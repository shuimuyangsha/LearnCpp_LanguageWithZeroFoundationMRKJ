// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  写一个函数AddAge，该函数的参数为某人的年龄，每调一次，使这个人“长一岁”。
*/

using namespace std;

void AddAge(int& age) {
	age += 1;
}


int main(int argc, char* argv[])
{
	int age = 3;
	AddAge(age);
	AddAge(age);
	AddAge(age);
	cout << age << endl;
	return 0;
}
