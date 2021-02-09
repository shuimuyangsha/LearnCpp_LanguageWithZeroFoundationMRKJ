// Try.cpp : Defines the entry point for the console application.
//

#include<stdlib.h>
#include<stdio.h>

/*
  定义3个变量x,y,z，分别赋值为3,3,1。语句
  prinf("%d,%d,%d "，(++x,y++),z+x+y+2)输出的结果会是什么？
*/
int main(int argc, char* argv[])
{
	int x = 3, y = 3, z = 1;
	printf("%d,%d,%d \n", (++x, y++), z + x + y + 2);
	return 0;
}

