// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


/*
  ĳ�����껯����3.5%���ִ���һ��Ԫ��������һ�����Ϣ�ж���Ǯ��
  ���㹫ʽ��һ������ = ���� * �껯���� / 365��
*/

int main(int argc, char* argv[])
{
  float rate = 0.035f;
  int principal = 10000;
  printf("%f\n", principal * rate / 365);
  return 0;
}

