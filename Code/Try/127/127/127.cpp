// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  дһ������printStudent()��������һ��ѧ���ṹ�壬Ҫ�������������
  ���ѧ�������гɼ���
*/

using namespace std;

struct Student {
	int score_en;
	int score_zh;
	int score_math;
};
void printStudent(Student stu) {
	cout << "Ӣ�ĳɼ�:" << stu.score_en << "\n"
		<< "���ĳɼ�:" << stu.score_zh << "\n"
		<< "��ѧ�ɼ�:" << stu.score_math << "\n";
}

int main(int argc, char* argv[])
{

	Student stu;
	stu.score_en = 98;
	stu.score_zh = 99;
	stu.score_math = 59;
	printStudent(stu);
	return 0;
}
