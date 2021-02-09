// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义“动物类”， 再定义“鸟类”，继承“动物类”， 在构造函数和析构中打印字符
  串，查看构造函数和析构函数的调用顺序。
*/

using namespace std;

// 动物类
class CAnimal
{
public:
	CAnimal() {
		cout << "CAnimal()" << endl;
	}
	~CAnimal() {
		cout << "~CAnimal()" << endl;
	}
};


// 鸟类
class CBird : public CAnimal
{
public:
	CBird() {
		cout << "CBird()" << endl;
	}
	~CBird() {
		cout << "~CBird()" << endl;
	}
};


int main(int argc, char* argv[])
{
	CBird bird;
	return 0;
}
