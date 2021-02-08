// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdarg.h>

/*
  求平均数
*/

using namespace std;

float average(int num, ...) {
  va_list ag;
  va_start(ag, num);

  int sum = 0;                 // 保存总和
  int count = num;             // 记录值的数量
  while(num--) {
    int val = va_arg(ag, int); // 取得变量的值
    sum += val;                // 累加总和
  }

  va_end(ag);

  return sum / (float)count;
}


int main(int argc, char* argv[])
{
  cout << average(3, 1,2,3) << endl;
  cout << average(6, 1,2,3,4,5,6) << endl;
  return 0;
}
