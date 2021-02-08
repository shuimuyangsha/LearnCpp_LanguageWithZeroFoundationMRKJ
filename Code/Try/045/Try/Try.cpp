// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  猜数字游戏：假设目标数字为147，使用while循环实现控制台的多次输入，
  系统提示输入的数字偏大还是偏小，猜对终止程序。
*/

using namespace std;
int main(int argc, char* argv[])
{
	cout << "请输入数字" << endl;
  int input = 0;
  cin >> input;
  while(input != 147){
    if(input > 147) {
      cout << "数字偏大,请输入数字" << endl;
      cin >> input;
    }
    else if(input < 147){
      cout << "数字偏小,请输人数字" << endl;
      cin >> input;
    }
    else {
      cout << "您猜对了!" << endl;
    }
  }
	return 0;
}

