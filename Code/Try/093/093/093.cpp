// Try.cpp : Defines the entry point for the console application.
//

#include<stdlib.h>
#include<stdio.h>

/*
  输出“wonderful”中第一个元音字母。
*/
int main(int argc, char* argv[])
{
	char buf[] = { "wonderful" };
	char *p = buf;
	printf("%c\n", *(p + 1));
	return 0;
}

