// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


/*
  某基金年化利率3.5%，现存入一万元本金，请问一天后利息有多少钱？
  计算公式：一天收益 = 本金 * 年化利率 / 365。
*/

int main(int argc, char* argv[])
{
  float rate = 0.035f;
  int principal = 10000;
  printf("%f\n", principal * rate / 365);
  return 0;
}

