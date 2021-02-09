// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义“人”类， 再定义“学生”类和“教师”类，以公有方式继续“人”类。
*/

class CPerson
{
public:
	char name[64];
};
class CStudent : public CPerson
{
};
class CTeacher : public CPerson
{
};


using namespace std;
int main(int argc, char* argv[])
{
	CPerson p;
	CTeacher t;
	CStudent s;

	strcpy(p.name, "一个人类");
	strcpy(t.name, "一个教师");
	strcpy(s.name, "一个学生");

	cout << p.name << endl;
	cout << t.name << endl;
	cout << s.name << endl;

	return 0;
}
