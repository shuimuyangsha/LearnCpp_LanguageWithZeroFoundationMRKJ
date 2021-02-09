// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  创建工厂类，工厂类中有一个抽象的生产方法，创建汽车厂和鞋厂，汽车厂生产的是汽车，
  鞋厂生产的是鞋。
*/

using namespace std;

class IFactory {
public:
	virtual void Create() const = 0;
};

class CCarFactory : public IFactory {
public:
	void Create() const {
		cout << "生产汽车！" << endl;
	}
};

class CShoeFactory : public IFactory {
public:
	void Create() const {
		cout << "生产鞋子！" << endl;
	}
};


int main(int argc, char* argv[])
{
	IFactory *p1 = new CCarFactory;
	IFactory *p2 = new CShoeFactory;

	p1->Create();
	p2->Create();

	return 0;
}
