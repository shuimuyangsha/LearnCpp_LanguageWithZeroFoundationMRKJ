// Try.cpp : Defines the entry point for the console application.
//

#include<stdlib.h>
#include<stdio.h>

/*
  ����3������x,y,z���ֱ�ֵΪ3,3,1�����
  prinf("%d,%d,%d "��(++x,y++),z+x+y+2)����Ľ������ʲô��
*/
int main(int argc, char* argv[])
{
	int x = 3, y = 3, z = 1;
	printf("%d,%d,%d \n", (++x, y++), z + x + y + 2);
	return 0;
}

