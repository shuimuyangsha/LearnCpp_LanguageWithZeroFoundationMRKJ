// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  自定义一个类型age，让该类型拥有与int型相同的效果，用于保存年龄。
*/

using namespace std;
int main(int argc, char* argv[])
{

	typedef int t_age;
	int age = 100;
	t_age a_age = age;
	cout << age << "," << a_age << endl;
	return 0;
}
