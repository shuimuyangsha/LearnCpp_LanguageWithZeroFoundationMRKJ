// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  �Զ���һ��Vehicle����ͨ���ߣ��࣬������Ϊ���࣬�������Զ���һ��move()
  ������Ȼ���Զ���Train���𳵣����Car���������࣬���̳���Vehicle
  �࣬������������������д�����е�move()��������� ����ͨ���߶������ƶ�����
  ��������������ʻ���Լ��� �����ڹ�·����ʻ����
*/

using namespace std;

class CVehicle
{
public:
	void move() {
		cout << "��ͨ���߶������ƶ�" << "\n";
	}
};

class CTrain : public CVehicle
{
public:
	void move() {
		cout << "������������ʻ" << "\n";
	}
};

class CCar : public CVehicle
{
public:
	void move() {
		cout << "�����ڹ�·����ʻ" << "\n";
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
