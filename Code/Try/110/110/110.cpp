// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  补全以下代码，使程序输出 2,4,6
  // 在此处定义函数 foo

  void filter(int arr[], int size, int (*pFun)(int)) {
  for(int i=0; i<size; ++i) {
  if(!pFun(arr[i])) {
  cout << arr[i] << endl;
  }
  }
  }

  void main(int argc, char* argv[])
  {
  int arr[] = {1,2,3,4,5,6,7};
  filter(arr, 7, foo);
  }

*/

using namespace std;


// 在此处定义函数 foo
int foo(int aint) {
	return aint % 2;
}

void filter(int arr[], int size, int(*pFun)(int)) {
	for (int i = 0; i < size; ++i) {
		if (!pFun(arr[i])) {
			cout << arr[i] << endl;
		}
	}
}

void main(int argc, char* argv[])
{
	int arr[] = { 1,2,3,4,5,6,7 };
	filter(arr, 7, foo);
}
