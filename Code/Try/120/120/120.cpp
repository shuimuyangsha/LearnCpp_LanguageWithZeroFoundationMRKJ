// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义一个表示汽车的结构。
*/

using namespace std;
int main(int argc, char* argv[])
{
	struct CCar {
		int speed;
		char name[64];
	};

	CCar a_car;
	a_car.speed = 100;
	strcpy(a_car.name, "DF");

	cout << a_car.name << " ";
	cout << "时速: " << a_car.speed << endl;
	return 0;
}
