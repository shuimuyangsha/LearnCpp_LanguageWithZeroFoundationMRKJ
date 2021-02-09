// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义命名空“mingrisoft“和”microsoft”,在两个命名空间中，
  声明同一个变量“name”，并赋为不同的值，然后再输出两个变量的值，。
*/

namespace mingrisoft {
	const char * name = "mingrisoft";
}


using namespace std;
int main(int argc, char* argv[])
{
	using namespace mingrisoft;
	cout << name << endl;
	return 0;
}
