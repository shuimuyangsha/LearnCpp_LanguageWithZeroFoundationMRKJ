// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义一个汽车的结构体，结构体中包含剩余汽油升数。定义一个加油的函数，将汽车当做
  参数参数，每执行一次改函数，汽车的剩余汽油升数都会乘2。（
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
	cout << "加油前:" << car.gasoline << endl;
	Add(&car);
	cout << "加油后:" << car.gasoline << endl;

	Add(&car);
	cout << "加油后:" << car.gasoline << endl;

	Add(&car);
	cout << "加油后:" << car.gasoline << endl;

	return 0;
}
