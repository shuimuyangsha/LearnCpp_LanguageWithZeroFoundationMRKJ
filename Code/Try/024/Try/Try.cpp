// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  公司年会抽奖：
    ①“1”代表“一等奖”，奖品是“42寸彩电”；
    ②“2”代表“二等奖”，奖品是“光波炉”；
    ③“3”代表“三等奖”，奖品是“加湿器”；
    ④“4”代表“安慰奖”，奖品是“16G-U盘”。
*/

using namespace std;
int main(int argc, char* argv[])
{
  int iInput;
  cout << "请输入一个数字:" << endl;
  cin >> iInput; //输入一整型数

  if(iInput == 1) {
    cout << "“一等奖”，奖品是“42寸彩电”；"<<endl;
    return 0;
  }
  if(iInput == 2) {
    cout << "“二等奖”，奖品是“光波炉”；" << endl;
    return 0;
  }
  if(iInput == 3) {
    cout << "“三等奖”，奖品是“加湿器”；" << endl;
    return 0;
  }
  if(iInput == 4) {
    cout << "“安慰奖”，奖品是“16G-U盘”。" << endl;
    return 0;
  }

  cout << "请输入1,2,3或4"<< endl;
  return 0;
}

