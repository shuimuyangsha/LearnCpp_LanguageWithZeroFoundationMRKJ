// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip> // 重点要包含这个文件

/*
  银行的年利率为2.95%，如果在银行中存入10000元，
  一年后可以取出多少钱？（小数点后保留两位）
  计算公式：
  本金+利息 = 0.0295 * 10000 +10000
*/


using namespace std; // 引入命名空间
int main(int argc, char* argv[])
{
  // 计算最终结果
  double rate = 0.00295;
  double total = rate * 10000 + 10000;

  // 以固定方式输出，保留2位小数
  cout << fixed << setprecision(2) << total << endl;
  return 0;
}

