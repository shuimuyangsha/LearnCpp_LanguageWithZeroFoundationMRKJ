// Try.cpp : Defines the entry point for the console application.
//

#include<stdlib.h>
#include<stdio.h>


/*
  找出身份证号“123456190001017890”中的出生年月日。
*/

int main(int argc, char* argv[])
{
	char card[] = { "123456190001017890" };
	char *p = card;
	for (int i = 0; i < 8; ++i) {
		printf("%c", *(p + 6 + i));
	}
	printf("\n");
	return 0;
}

