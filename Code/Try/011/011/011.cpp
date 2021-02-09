// Try.cpp : Defines the entry point for the console application.
//


#include <iostream>


/*
  有两名男性应聘者：一位25岁，一位32岁。该公司招聘信息中有一个要求，
  即男性应聘者的年龄在23~30岁之间，判断这两名应聘者是否满足这个要求。
*/
using namespace std;
int main(int argc, char* argv[])
{
	int age_a = 25;
	int age_b = 32;
	if (23 <= age_a && age_a <= 30) {
		cout << age_a << "岁,满足招聘要求" << endl;
	}
	else {
		cout << age_a << "岁,不满足招聘要求" << endl;
	}

	if (23 <= age_b && age_b <= 30) {
		cout << age_b << "岁,满足招聘要求" << endl;
	}
	else {
		cout << age_b << "岁,不满足招聘要求" << endl;
	}
	return 0;
}

