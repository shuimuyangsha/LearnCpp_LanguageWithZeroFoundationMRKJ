// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "Try.h"
/*
  声明教师类，将其工资声明为私有的，再声明校长类，校长类有一个教师类的友元函数，
  使这个函数，可以访问教师的工资。
*/

using namespace std;

CTeacher::CTeacher(int sal) {
	salary = sal;
}

int CTeacher::GetSalary() {
	return salary;
}

void CHeadMaster::SetSalary(CTeacher& teacher) {
	teacher.salary = 5000;
}


int main(int argc, char* argv[])
{
	CTeacher teacher(3000);
	cout << "教师原来工资：" << teacher.GetSalary() << endl;

	CHeadMaster master;
	master.SetSalary(teacher);
	cout << "经校长调整后教师工资：" << teacher.GetSalary() << endl;
	return 0;
}
