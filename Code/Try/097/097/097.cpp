// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  有如下代码：
  int a=0x12345678;
  void * p = &a;
  变量a为4字节的整数，尝试将a的每一个字节单独输出，即最终结果为：
  12
  34
  56
  78

 */

using namespace std;
int main(int argc, char* argv[])
{
	int a = 0x12345678;
	void * p = &a;
	char * pc = (char*)p;
	cout << hex << (int)(*(pc + 3)) << endl;
	cout << hex << (int)(*(pc + 2)) << endl;
	cout << hex << (int)(*(pc + 1)) << endl;
	cout << hex << (int)(*(pc + 0)) << endl;
	return 0;
}
