
// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  楼梯有10阶台阶，上楼可以一步上1阶，也可以一步上2阶，编一程序计算共有多少
  种不同的走法。

*/

using namespace std;

// 计算有多少种走法
int calc (int step) {
  if(step ==1) {
    return 1;        // 台阶有一阶，只有一种走法
  }
  if(step == 2) {
    return 2;        // 台阶有两阶，有两种走法，1:一次一阶; 2:一次两阶
  }

  // 台阶多于2阶，走法 = 第一步迈1阶的走法+第一步逐2阶的走法
  // 也可以说是：   走法 = 剩余的99阶的走法+剩余的98阶的走法。
  return calc (step - 1) + calc(step - 2);
}


int main(int argc, char* argv[])
{
  cout << "共有" << calc(10) << "种走法" << endl;
  return 0;
}
