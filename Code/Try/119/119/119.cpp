// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义一个表生老师的结构体，结构体的成员有姓名，年龄，教龄；使用该结构体定义一个
  老师，并赋值，再输出。
*/

using namespace std;
int main(int argc, char* argv[])
{
	struct Teacher {
		char name[64]; // 姓名
		int age;       // 年龄
		int seniority; // 教龄
	};

	struct Teacher a_teacher;
	strcpy(a_teacher.name, "明师");
	a_teacher.age = 35;
	a_teacher.seniority = 10;

	cout << "姓名:" << a_teacher.name << "\n"
		<< "年龄:" << a_teacher.age << "\n"
		<< "教龄:" << a_teacher.seniority << "\n";
	return 0;
}
