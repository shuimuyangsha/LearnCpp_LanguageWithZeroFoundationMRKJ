// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  ����ѭ����m��n���ݡ�
 */

using namespace std;

int calc(int m, int n) {
  int val = 1;
  while(n--) {
    val *= m;
  }
  return val;
}


int main(int argc, char* argv[])
{
  int m = 3;
  int n = 8;
  cout << m << "��" << n << "���� = "  << calc(m , n) << endl;
  return 0;
}
