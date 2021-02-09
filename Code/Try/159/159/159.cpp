// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义“动物”类，它的构造函数有两个参数，表示动物的大小和移动速度；再定义“鸟类”，
  继承“动物”类，鸟类的构造函数中显示调用“动物”类的构造函数。
*/

using namespace std;

class CAnimal
{
public:
	CAnimal(int hght, int spd) {
		height = hght;
		speed = spd;
	}

	int height;
	int speed;
};

class CBird : public CAnimal
{
public:
	CBird(int hght, int spd)
		: CAnimal(hght, spd)
	{
	}
};

int main(int argc, char* argv[])
{
	CBird bird(10, 200);
	cout << bird.height << endl;
	cout << bird.speed << endl;
	return 0;
}
