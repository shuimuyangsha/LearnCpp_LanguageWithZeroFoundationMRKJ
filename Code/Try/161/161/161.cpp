// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义“人”类，它有一个成员函数”SayHello()”，输出“Hello，我是
  人类”，定义一个“教师类”，也有一个函数“SayHello（）”，输出“Hel-
  -lo，我是教师”， 在main函数中定文“人”类和“教师”类的变量，并分别调
  用“SayHello（）”函数，观察输出结果。
*/

using namespace std;
class CPerson
{
public:
	void SayHello() {
		cout << "我是人类" << endl;
	}
};

class CTeacher : public CPerson
{
public:
	void SayHello() {
		cout << "我是人民教师" << endl;
	}
};




int main(int argc, char* argv[])
{
	CPerson person;
	CTeacher teacher;

	person.SayHello();
	teacher.SayHello();
	return 0;
}
