// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*
  ���������б��ʽ�����Ե�����(x0, x1, x2)��������������˳��
  ʹ������Ľ����Ϊ��1����
      int x0 = 0, x1=1, x2=2;
      printf("%d\n", (x0, x1, x2)); // ���ֵΪ2
*/
int main(int argc, char* argv[])
{
  int x0 = 0, x1=1, x2=2;
  printf("(x0, x1, x2) output:%d\n", (x0, x1, x2)); // ���ֵΪ2
  printf("(x0, x2, x1) output:%d\n", (x0, x2, x1)); // ���ֵΪ1
	return 0;
}

