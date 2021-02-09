// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义一个冰箱结构体，它有一个成员类型是“螺丝”结构体数组，代表这台冰箱中的所有
  螺丝；再写代码，输出所有螺丝的长度。
*/

using namespace std;
int main(int argc, char* argv[])
{
	struct Fridge {
		struct {
			int length;
		}screwdriver[3]; // 最多包含三个螺丝
		int screwdriver_count; // 目前螺丝的数量
	} fridge;
	Fridge * p = &fridge;
	p->screwdriver[0].length = 10;
	p->screwdriver[1].length = 8;
	p->screwdriver_count = 2;

	for (int i = 0; i < p->screwdriver_count; i++) {
		cout << p->screwdriver[i].length << endl;
	}

	return 0;
}
