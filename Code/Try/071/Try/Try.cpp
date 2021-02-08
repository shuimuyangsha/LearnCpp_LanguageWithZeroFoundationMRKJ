// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  利用循环求m的n次幂。
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
  cout << m << "的" << n << "次幂 = "  << calc(m , n) << endl;
  return 0;
}
