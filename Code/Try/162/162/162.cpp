// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  自定义一个Vehicle（交通工具）类，用来作为基类，该类中自定义一个move()
  方法；然后自定义Train（火车）类和Car（汽车）类，都继承自Vehicle
  类，在这两个派生类中重写基类中的move()方法，输出 “交通工具都可以移动”，
  “火车在铁轨上行驶”以及“ 汽车在公路上行驶”。
*/

using namespace std;

class CVehicle
{
public:
	void move() {
		cout << "交通工具都可以移动" << "\n";
	}
};

class CTrain : public CVehicle
{
public:
	void move() {
		cout << "火车在铁轨上行驶" << "\n";
	}
};

class CCar : public CVehicle
{
public:
	void move() {
		cout << "汽车在公路上行驶" << "\n";
	}
};


int main(int argc, char* argv[])
{
	CVehicle v;
	CTrain train;
	CCar car;

	v.move();
	train.move();
	car.move();
	return 0;
}
