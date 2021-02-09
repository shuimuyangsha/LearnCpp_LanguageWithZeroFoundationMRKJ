// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  使用指针输出表示老师的结构体变量的成员。
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

	// 定义指针，指向老师
	struct Teacher *pTeacher = &a_teacher;


	// 赋值
	strcpy(pTeacher->name, "明师");
	pTeacher->age = 35;
	pTeacher->seniority = 10;

	cout << "姓名:" << pTeacher->name << "\n"
		<< "年龄:" << pTeacher->age << "\n"
		<< "教龄:" << pTeacher->seniority << "\n";
	return 0;
}
