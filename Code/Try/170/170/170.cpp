// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  练习一:
  定义“人”类，它有一个成员函数“virutal void SayHello（）”，
  该函数中输出“我是人类”，在定义一个“学生类”，也有一个成员函数
  “SayHello（）”， 该函数中输出“我是一个学生”；在main函数中，
  声明“人”类的指针“p”，并分别用“人”类和“学生”类的变量对该指针进行赋值；
  之后调用“p->SayHello()”,观察当赋值的变量不同时，函数的输出。
  练习二:
  在练习一的基础之上，给“人”类和“学生”类，分别定义成员函数
  “void SayBoodbye()；”，然后使用同样的方法，调用这个函数，查看结果是
  否是期望中的结果，如果不是，请解释为什么。
*/

using namespace std;

class CPersion
{
public:
	CPersion() {}
	virtual void SayHello() {
		cout << "我是人类" << endl;
	}
	void SayGoodbye() {
		cout << "我是人类, Goodbye!" << endl;
	}
};

class CStudent : public CPersion
{
public:
	CStudent() {}
	virtual void SayHello() {
		cout << "其实，我是一个学生" << endl;
	}
	void SayGoodbye() {
		cout << "我是学生, Goodbye!" << endl;
	}
};


int main(int argc, char* argv[])
{
	CPersion *p;
	CPersion persion;
	CStudent student;

	p = &persion;
	p->SayHello();
	p->SayGoodbye();

	p = &student;
	p->SayHello();
	p->SayGoodbye();

	return 0;
}
