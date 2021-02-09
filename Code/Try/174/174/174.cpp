// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  创建Graphical（图形）类，该类中有一个计算面积的方法。圆形和矩形都继承
  自图形类，输出圆形和矩形的面积。
*/

using namespace std;

class Graphical
{
public:
	virtual float GetArea() const = 0;
};

class CRectangle : public Graphical
{
public:
	virtual float GetArea() const {
		cout << "计算矩形面积: 长 * 宽\n";
		return 2.0;
	}
};

class CCircle : public Graphical
{
public:
	virtual float GetArea() const {
		cout << "计算圆形面积: 半径的平方 * 派\n";
		return 1.0;
	}
};


int main(int argc, char* argv[])
{
	CRectangle r;
	CCircle c;

	Graphical * p;

	p = &r;
	p->GetArea();

	p = &c;
	p->GetArea();
	return 0;
}
