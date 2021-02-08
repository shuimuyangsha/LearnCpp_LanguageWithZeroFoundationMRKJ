// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
/*
  一位女士去银行取钱，银行卡密码是404328，密码正确可以取钱，错误则提示重新输入，请在控制台模拟此场景。
*/

using namespace std;
int main(int argc, char* argv[])
{
  int pass;
  cin >> pass;
  if(pass == 404328) {
    cout << "可以取钱"<<endl;
  }
  else {
    cout << "密码错误,请重新输入密码"<<endl;
  }
	return 0;
}

