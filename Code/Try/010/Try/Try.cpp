// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>

/*
  地球的年龄约为45.5亿年，用科学计数法输出地球的年龄。
*/

int main(int argc, char* argv[])
{
  // 计算最终结果
  double age = 45.5 * 100000000;
  // 科学记数法输出
  printf("地球的年龄约为 %.2e年\n", age);

  return 0;
}

