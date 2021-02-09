// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义学生类“CStudent”，有三个成员：姓名、年龄、班级，要求在声明该类的
  变量时可以对这三个成员进行赋值，使这个类可以用如下方式使用:
  CStudent stu(“华安”,”14”, “三年二班”)；
*/

using namespace std;

class CStudent {
public:
	CStudent(const char * name, int age, const char * cla) {
		strcpy(m_name, name);
		m_age = age;
		strcpy(m_class, cla);
	}

	char m_name[64];
	int m_age;
	char m_class[64];
};


int main(int argc, char* argv[])
{
	CStudent stu("华安", 14, "三年二班");

	cout << stu.m_name << ", "
		<< stu.m_age << ", "
		<< stu.m_class << "\n";

	return 0;
}
