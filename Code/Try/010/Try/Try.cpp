// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>

/*
  ���������ԼΪ45.5���꣬�ÿ�ѧ�����������������䡣
*/

int main(int argc, char* argv[])
{
  // �������ս��
  double age = 45.5 * 100000000;
  // ��ѧ���������
  printf("���������ԼΪ %.2e��\n", age);

  return 0;
}

