// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  公司员工下班乘车可以坐出租，可以做公交车，也可以坐飞机，设计一个交通工具的共用
  体，让员工进行选择。
*/

using namespace std;
int main(int argc, char* argv[])
{

	// 公交车
	struct bus {
		char name[64];
	};

	// 飞机
	struct plane {
		char name[64];
	};

	// 交通工具
	union Transportation {
		bus p;
		plane c;
	};

	Transportation t;
	strcpy(t.p.name, "公交车");
	strcpy(t.c.name, "飞机");

	cout << t.p.name << endl;
	cout << t.c.name << endl;
	return 0;
}
