// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  设计一个玻璃罐头瓶的共用体，这个罐头瓶可以装黄桃，可以装椰子，也可以装山楂，但
  一次只能装一种水果。
*/

using namespace std;
int main(int argc, char* argv[])
{

	// 桃
	struct peaches {
		char name[64];
	};

	// 椰子
	struct coconut {
		char name[64];
	};

	// 山楂
	struct hawthorn {
		char name[64];
	};


	// 罐头
	union tin {
		peaches p;
		coconut c;
		hawthorn h;
	};

	tin t;
	strcpy(t.p.name, "桃");
	strcpy(t.c.name, "椰子");
	strcpy(t.h.name, "山楂");


	cout << t.p.name << endl;
	return 0;
}
