// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义函数，该函数可以返回数组中指定元素的位置，返回值为类型为“int *”。
*/

using namespace std;

int * GetPosPtr(int array[], int index) {
	return &array[index];
}


int main(int argc, char* argv[])
{
	int array[3] = { 0,1,2 };
	int * p;
	p = GetPosPtr(array, 0);
	cout << *p << endl;

	p = GetPosPtr(array, 1);
	cout << *p << endl;


	p = GetPosPtr(array, 2);
	cout << *p << endl;


	return 0;
}
