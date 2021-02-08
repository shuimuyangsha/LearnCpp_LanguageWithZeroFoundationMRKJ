// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  某商场员工，正在库房整理衣服，此时进来一位顾客，这位员工放下手上的工作，去招
  呼顾客。请模拟此场景。
*/

using namespace std;

int main(int argc, char* argv[])
{
  char c;
  cout << "输入0，整理衣物" << endl;
  cout << "输入1，招待顾客" << endl;
 ZhengLi:
  cin >> c;
  if(c != '1') {
    cout << "整理衣物" << endl;
    goto ZhengLi;
  }
  else {
    goto ZhaoDai;
  }
 ZhaoDai:
  cout << "招待顾客" << endl;
  return 0;
}

