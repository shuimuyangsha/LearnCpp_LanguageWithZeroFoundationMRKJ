// Try.cpp : Defines the entry point for the console application.
//

#include<stdlib.h>
#include<stdio.h>

/*
  �����wonderful���е�һ��Ԫ����ĸ��
*/
int main(int argc, char* argv[])
{
	char buf[] = { "wonderful" };
	char *p = buf;
	printf("%c\n", *(p + 1));
	return 0;
}

