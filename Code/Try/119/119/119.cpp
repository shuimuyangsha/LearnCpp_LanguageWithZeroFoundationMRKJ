// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ����һ��������ʦ�Ľṹ�壬�ṹ��ĳ�Ա�����������䣬���䣻ʹ�øýṹ�嶨��һ��
  ��ʦ������ֵ���������
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
	strcpy(a_teacher.name, "��ʦ");
	a_teacher.age = 35;
	a_teacher.seniority = 10;

	cout << "����:" << a_teacher.name << "\n"
		<< "����:" << a_teacher.age << "\n"
		<< "����:" << a_teacher.seniority << "\n";
	return 0;
}
