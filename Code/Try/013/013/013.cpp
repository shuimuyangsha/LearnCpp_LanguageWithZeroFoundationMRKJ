// Try.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
/*
  使用位运算， 将0xFFFF1234最低位的两个字节设置为0，结果为0xFFFF0000。
*/

int main(int argc, char* argv[])
{
	printf("%08X\n", 0xFFFF1234 & 0xFFFF0000);
	return 0;
}

