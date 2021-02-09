// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义鸟类，该类有一个函数fly()；
  定义模板函数DoFly，该函数可以调用鸟类的fly函数；
  重载该模板函数，使其可以接受一个“飞机”类型的参数，并调用飞机的飞行fly。
*/

using namespace std;
class CBird {
public:
	void fly() {
		cout << "CBird::fly()" << endl;
	}
};

class CPlane {
public:
	void fly() {
		cout << "CPlane::fly()" << endl;
	}
};

template< class T>
void DoFly(T& t) {
	t.fly();
}

void DoFly(CPlane& p) {
	p.fly();
}

int main(int argc, char* argv[])
{
	CBird bird;
	CPlane plane;

	DoFly<CBird>(bird);
	cout << endl;
	DoFly(plane);
	return 0;
}
