// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  �Զ���һ������age���ø�����ӵ����int����ͬ��Ч�������ڱ������䡣
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
