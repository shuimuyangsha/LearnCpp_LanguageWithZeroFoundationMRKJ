// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ����Graphical��ͼ�Σ��࣬��������һ����������ķ�����Բ�κ;��ζ��̳�
  ��ͼ���࣬���Բ�κ;��ε������
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
		cout << "����������: �� * ��\n";
		return 2.0;
	}
};

class CCircle : public Graphical
{
public:
	virtual float GetArea() const {
		cout << "����Բ�����: �뾶��ƽ�� * ��\n";
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
