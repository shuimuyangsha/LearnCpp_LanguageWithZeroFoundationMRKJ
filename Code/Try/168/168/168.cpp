// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义“可移动类”和“可唱歌类”， 定义“精灵”类，继承前两个类； 在main函
  数中定义“精灵”类类型的变量，查看两类的构造函数的调用顺序。
*/

using namespace std;

class CMoveable
{
public:
	CMoveable() {
		cout << "CMoveable()" << endl;
	}
	~CMoveable() {
		cout << "~CMoveable()" << "\n";
	}
};

class CSingable
{
public:
	CSingable() {
		cout << "CSingable()" << endl;
	}
	~CSingable() {
		cout << "~CSingable()" << "\n";
	}
};

// 男教师类
class CSpirit : public CMoveable, public CSingable {

};

int main(int argc, char* argv[])
{
	CSpirit mt;
	return 0;
}
