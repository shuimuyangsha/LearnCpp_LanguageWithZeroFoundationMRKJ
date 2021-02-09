// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义一个代表老师的结构体“struct Teacher”，它有一个成圆变量“count”，
  代表批改过的作业的数量，并定义一个函数，该函数可以接受一个学生和一个老师作为参
  数，在函数中，老师给学生打一个分数，并增加批改过的作的数量。
*/
struct Teacher {
	int count;
};
struct Student {
	int score;
};

void Check(Teacher * pTeacher, Student * pStudent) {
	pStudent->score = 98;
	pTeacher->count++;
}

using namespace std;
int main(int argc, char* argv[])
{
	Teacher t = { 0 };
	Student s1, s2, s3;
	Check(&t, &s1);
	Check(&t, &s2);
	Check(&t, &s3);

	cout << t.count << "\n";
	cout << s1.score << endl;
	cout << s2.score << endl;
	cout << s3.score << endl;
	return 0;
}
