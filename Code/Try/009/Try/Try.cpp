// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>

/*
  光在真空中的速度为299792458米／秒，请用科学计数法输出光速。
*/

int main(int argc, char* argv[])
{
  // 计算最终结果
  double v = 299792458;
  // 科学记数法输出
  printf("真空中的速度为%e米/秒\n", v);

  return 0;
}

