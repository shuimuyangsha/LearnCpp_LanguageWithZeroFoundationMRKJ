

// Try.cpp : Defines the entry point for the console application.
//

#include<stdlib.h>
#include<stdio.h>

/*
  定义一个变量，之后以十六进制格式出变量的地址。
*/
int main(int argc, char* argv[])
{
	int val = 100;
	printf("val的地址为：%08X\n", &val);
	return 0;
}

