// Try.cpp : Defines the entry point for the console application.
//

#include<stdlib.h>
#include<stdio.h>


/*
  �ҳ����֤�š�123456190001017890���еĳ��������ա�
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

