// Try.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
/*
  ʹ��λ���㣬 ��0xFFFF1234���λ�������ֽ�����Ϊ0�����Ϊ0xFFFF0000��
*/

int main(int argc, char* argv[])
{
	printf("%08X\n", 0xFFFF1234 & 0xFFFF0000);
	return 0;
}

