// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdarg.h>

/*
  编写电梯测重函数，函数使用可变参数，传入电梯中所有乘客的体重值，如果电梯中的
  重量超过1000Kg，则返回0，否则返回1。
*/

using namespace std;

int CheckSum(int num, ...) {
  va_list ag;
  va_start(ag, num);

  int sum = 0;
  while(num--) {
    int val = va_arg(ag, int); // 取得体重
    sum += val;  // 累加总体重
  }

  va_end(ag);

  if(sum >1000) {
    return 0;
  }
  else {
    return 1;
  }
}


int main(int argc, char* argv[])
{
  cout << CheckSum(3, 200, 300, 400) << endl;
  cout << CheckSum(4, 200, 300, 400, 500) << endl;
  return 0;
}
