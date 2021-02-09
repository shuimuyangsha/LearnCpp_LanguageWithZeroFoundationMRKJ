// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  写一个函数printStudent()，并定义一个学生结构体，要求这个函数可以
  输出学生的所有成绩。
*/

using namespace std;

struct Student {
	int score_en;
	int score_zh;
	int score_math;
};
void printStudent(Student stu) {
	cout << "英文成绩:" << stu.score_en << "\n"
		<< "中文成绩:" << stu.score_zh << "\n"
		<< "数学成绩:" << stu.score_math << "\n";
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
