// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ʹ��ָ�������ʾ��ʦ�Ľṹ������ĳ�Ա��
*/

using namespace std;
int main(int argc, char* argv[])
{
	struct Teacher {
		char name[64]; // ����
		int age;       // ����
		int seniority; // ����
	};

	struct Teacher a_teacher;

	// ����ָ�룬ָ����ʦ
	struct Teacher *pTeacher = &a_teacher;


	// ��ֵ
	strcpy(pTeacher->name, "��ʦ");
	pTeacher->age = 35;
	pTeacher->seniority = 10;

	cout << "����:" << pTeacher->name << "\n"
		<< "����:" << pTeacher->age << "\n"
		<< "����:" << pTeacher->seniority << "\n";
	return 0;
}
