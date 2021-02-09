// Try.cpp : Defines the entry point for the console application.
//


#include <iostream>

/*
  输出整型值65对应的字母，再输出整型值97所对应的字母，最后根据二者的差值，
  推导出大字母和小写字母的关系。
*/

using namespace std;
int main(int argc, char* argv[])
{
	cout << (char)65 << endl;
	cout << (char)97 << endl;
	// 97 - 65 = 32
	// 'a'  'A'
	// 大写字母的ascii值比小写字母'小 32'
	return 0;
}

