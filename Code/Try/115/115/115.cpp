// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  дһ������AddAge���ú����Ĳ���Ϊĳ�˵����䣬ÿ��һ�Σ�ʹ����ˡ���һ�ꡱ��
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
