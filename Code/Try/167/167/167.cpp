// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义“男人”类和“教师”类，定义 “男教师”类，继承前两个类； 在main函数
  中定义“男教师”类型的变量，查看两个类类的构造函数的调用顺序。
*/

using namespace std;

class CMan
{
public:
	CMan() {
		cout << "CMan()" << endl;
	}
	~CMan() {
		cout << "~CMan()" << "\n";
	}
};

class CTeacher
{
public:
	CTeacher() {
		cout << "CTeacher()" << endl;
	}
	~CTeacher() {
		cout << "~CTeacher()" << "\n";
	}
};

// 男教师类
class CMaleTeacher : public CMan, public CTeacher {

};

int main(int argc, char* argv[])
{
	CMaleTeacher mt;
	return 0;
}
