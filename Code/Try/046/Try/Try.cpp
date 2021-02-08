// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  生物实验室做单细胞细菌繁殖实验，每一代细菌数量都会成倍数增长，一代菌落中只有
  一个细菌，二代菌落中分裂成两个细菌，三代菌落中分裂成4个细菌，以此类推，请问
  第十二代菌落中的细菌数量。
*/

using namespace std;
int main(int argc, char* argv[])
{
  int i = 1;
  int total = 1;
  while(i < 12) {
    cout << "第" << i << "代数量:" << total << endl;
    total = total * 2;   // 分列

    i++;   // “代”增涨
  }
  cout << "第十二代菌落中的细菌数量为" << total << endl;
  return 0;
}

