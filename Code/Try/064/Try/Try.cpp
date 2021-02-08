// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  设计一个函数，该函数接受一个字符串参数，当传入参数时，输出该参数的值；当不传
  参数时，输出"什么也不说祖国知道我！"。
*/

using namespace std;

void Say(const char * str=0) {
  if(str == 0) {
    cout << "什么也不说祖国知道我" << endl;
  }
  else {
    cout << str << endl;
  }
}

int main(int argc, char* argv[])
{
  Say();
  Say("Hello");
  return 0;
}
