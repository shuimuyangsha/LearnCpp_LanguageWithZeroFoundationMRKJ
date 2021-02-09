// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  设计学生类和军人类，创建一个学生对象，将学生对象强制转换为军人对象。
*/

using namespace std;

class CSoldier
{
public:
	CSoldier(const char * name) {
		strcpy(this->name, name);
	}
	CSoldier(const CSoldier& other) {
		if (this != &other) {
			strcpy(this->name, other.name);
		}
	}
	char name[64];
};


class CStudent {
public:
	CStudent(const char * name)
	{
		strcpy(this->name, name);
	}
	operator CSoldier () const
	{
		cout << this->name << "弃笔从戎！" << endl;
		return CSoldier(this->name);
	}
	char name[64];
};

int main(int argc, char* argv[])
{
	CStudent st("李小瑞");
	CSoldier sl = (CSoldier)st;
	return 0;
}
