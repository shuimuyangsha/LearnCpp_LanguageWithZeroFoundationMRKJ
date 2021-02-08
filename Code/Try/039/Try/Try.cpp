// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  设计程序时，可以设计若干参数，根据启动时输入的参数，执行不同的动作。如：某程序
  具有如下参数：
  "dir", "mkdir", "cls", "help", "ping"
  由于参数的首字母不重复，所以只需要输入首字母，即可确定这个参数，请写程序实现以
  上功能。
*/

using namespace std;
int main(int argc, char* argv[])
{
  char c;
  cout << "请输入以下字母中的一个，并按下回车(d,m,c,h,p):"<< endl;
  cin >> c;
  switch(c) {
  case 'd' :{
    cout << "dir" << endl;
    break;
  }
  case 'm' :{
    cout << "mkdir" << endl;
    break;
  }
  case 'c' :{
    cout << "cls" << endl;
    break;
  }
  case 'h' :{
    cout << "help" << endl;
    break;
  }
  case 'p' :{
    cout << "ping" << endl;
    break;
  }
  }
  return 0;
}

