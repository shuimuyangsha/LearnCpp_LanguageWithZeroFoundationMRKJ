// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  声明学生类“CStudent”，定义一个该类型的变量，使用引用对成员变变量进行
  赋值，输出学生类成员的值。
*/

using namespace std;

class CStudent {
public:
	char name[64];
	int age;
};


int main(int argc, char* argv[])
{
	CStudent stu;
	CStudent& stu_ref = stu;
	strcpy(stu_ref.name, "王小丽");
	stu_ref.age = 13;

	cout << "name:" << stu.name << endl;
	cout << "age :" << stu.age << endl;

	return 0;
}
