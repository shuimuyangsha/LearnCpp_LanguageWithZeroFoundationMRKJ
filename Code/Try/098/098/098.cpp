// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  补全下面的函数，该函数可以根据类型输出传变量的值：
  void PrintByType(void *p, int type) {
  switch(type) {
  case 0: // int型
  // 补全代码
  case 1: // char型
  // 补全代码
  case 2: // float型
  // 补全代码
  default:
  cout << "不能处理该类型:" << type <<endl;
  break;
  }
  }

*/

using namespace std;

void PrintByType(void *p, int type) {
	switch (type) {
	case 0: // int型
		cout << *(int *)p << endl;
		break;
	case 1: // char型
		cout << *(char *)p << endl;
		break;
	case 2: // float型
		cout << *(float *)p << endl;
		break;
	default:
		cout << "不能处理该类型:" << type << endl;
		break;
	}
}


int main(int argc, char* argv[])
{
	int aint = 100;
	char achar = 'A';
	float afloat = 3.14f;
	double adouble = 1234.0;
	PrintByType(&aint, 0);
	PrintByType(&achar, 1);
	PrintByType(&afloat, 2);
	PrintByType(&adouble, 3);
	return 0;
}
