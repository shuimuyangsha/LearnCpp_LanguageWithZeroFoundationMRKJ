// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  在函数中声明结构体时，直接定义一个该结构体的指针，之后用该指针改变结构体中成员
  的值。
*/

using namespace std;

struct Student {
	int age;
};
void AddAge(Student * pStudent) {
	pStudent->age += 1;
}


int main(int argc, char* argv[])
{
	Student a;
	a.age = 12;
	cout << "结构体中的age值：" <<a.age << endl;
	AddAge(&a);
	cout << "用指针改变后结构体中的age值：" << a.age << endl;
	return 0;
}
