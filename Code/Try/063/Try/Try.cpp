// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  设计一个函数，当传一个参数false时，函数输出"关灯"，当不传参数或传递参数
  为true时，函数输出"开灯"。
*/

using namespace std;
void Open(bool bOpen = true) {
  if(bOpen) {
    cout << "开灯" << endl;
  }
  else {
    cout << "关灯" << endl;
  }
}
int main(int argc, char* argv[])
{

  Open(false);
  Open();
  Open(true);
  return 0;
}
 
