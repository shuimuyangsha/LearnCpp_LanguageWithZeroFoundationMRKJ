// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*
  一辆货车运输箱子，载货区宽2米，长4米，一个箱子宽1.5米，长1.5米，
  请问载货区一层可以放多少个箱子？
*/
int main(int argc, char* argv[])
{
  printf("可以放%d个箱子\n", (int)(2/1.5)  *  (int) (4/1.5));
	return 0;
}

