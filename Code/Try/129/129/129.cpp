// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ����һ�������Ľṹ�壬�ṹ���а���ʣ����������������һ�����͵ĺ���������������
  ����������ÿִ��һ�θĺ�����������ʣ���������������2����
*/

using namespace std;

struct Car {
	float gasoline;
};

void Add(Car* pCar) {
	pCar->gasoline *= 2;
}

int main(int argc, char* argv[])
{
	Car car = { 12.0f };
	cout << "����ǰ:" << car.gasoline << endl;
	Add(&car);
	cout << "���ͺ�:" << car.gasoline << endl;

	Add(&car);
	cout << "���ͺ�:" << car.gasoline << endl;

	Add(&car);
	cout << "���ͺ�:" << car.gasoline << endl;

	return 0;
}
