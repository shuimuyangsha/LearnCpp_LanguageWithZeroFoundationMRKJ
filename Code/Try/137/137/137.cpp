// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义枚举类型“季节”的一个变量，并赋一个值，之后使用switch...case
  语句，判断季节，如果是夏天，则输出“现在是夏季”。
*/

using namespace std;
int main(int argc, char* argv[])
{
	enum Season { spring, summer, fall, winter };
	Season s = spring;
	switch (s) {
	case spring: {
		cout << "现在是春天" << endl;
		break;
	}
	case summer: {
		cout << "现在是夏天" << endl;
		break;
	}
	case fall: {
		cout << "现在是秋天" << endl;
		break;
	}
	case winter: {
		cout << "现在是冬天" << endl;
		break;
	}
	}

	return 0;
}
