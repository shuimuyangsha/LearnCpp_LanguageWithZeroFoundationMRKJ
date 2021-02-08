// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  自动售卖机有三种饮料，价格分别为3元、5元、7元。自动售卖机仅支持1元硬币支付，
  请编写该售卖机自动收费系统。
*/

using namespace std;
int main(int argc, char* argv[])
{
  int money = 0;
  int temp;
  do {
    cout << "请投入1元硬币:"<< endl;
    cin >> temp;
    if(temp != 1) {
      cout << "您投入的是元硬币，不符合要求!" << endl;
    }
    else {
      money ++;
      if(money == 3) {
        cout << "可买3元饮料" << endl;
      }
      else if (money == 5) {
        cout << "可买5元饮料" << endl;
      }
      else if(money == 7) {
        cout << "可买7元饮料" << endl;
      }
    }
  } while(money <7 );

  return 0;
}

