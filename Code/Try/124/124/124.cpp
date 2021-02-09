// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  尝试设计一个结构体来表示一辆小轿车，该结构体中设计一个发动机的结构体。
*/

using namespace std;
int main(int argc, char* argv[])
{
	// 声明结构体，同时定义变量
	struct Car {
		struct _Engine {
			int height;
			int width;
		} engine;  // 发动机
		int color; // 颜色
	} a_car;

	// 给发动机属性赋值
	a_car.engine.width = 40;
	a_car.engine.height = 60;

	// 设置车子的颜色
	a_car.color = 0x123456;



	return 0;
}
