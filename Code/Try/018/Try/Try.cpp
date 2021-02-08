// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*
  有如下两行表达式，尝试调整“(x0, x1, x2)”中三个变量的顺序，
  使它输出的结果变为“1”。
      int x0 = 0, x1=1, x2=2;
      printf("%d\n", (x0, x1, x2)); // 输出值为2
*/
int main(int argc, char* argv[])
{
  int x0 = 0, x1=1, x2=2;
  printf("(x0, x1, x2) output:%d\n", (x0, x1, x2)); // 输出值为2
  printf("(x0, x2, x1) output:%d\n", (x0, x2, x1)); // 输出值为1
	return 0;
}

