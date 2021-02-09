// Try.cpp : Defines the entry point for the console application.
//

#include<stdlib.h>
#include<stdio.h>

/*
  定义整型、浮点型、字符型变量，并分别输出它们的地址，观察三个地址之间的差值为
  多少。
*/

int main(int argc, char* argv[])
{
	int aint;
	int afloat;
	int achar;

	printf("&aint   = %08X\n", &aint);
	printf("&afloat = %08X\n", &afloat);
	printf("&achar  = %08X\n", &achar);

	return 0;
}

