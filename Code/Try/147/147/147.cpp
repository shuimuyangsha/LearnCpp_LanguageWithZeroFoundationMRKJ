// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "Try.h"
/*
  ������ʦ�࣬���乤������Ϊ˽�еģ�������У���࣬У������һ����ʦ�����Ԫ������
  ʹ������������Է��ʽ�ʦ�Ĺ��ʡ�
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
	cout << "��ʦԭ�����ʣ�" << teacher.GetSalary() << endl;

	CHeadMaster master;
	master.SetSalary(teacher);
	cout << "��У���������ʦ���ʣ�" << teacher.GetSalary() << endl;
	return 0;
}
