// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  某同学卖校园网，收费标准是一元一天，购买时间超过30天，按每天（包括30天）
  0.75元收费，计算该同学能卖多少钱。
*/

using namespace std;
int main(int argc, char* argv[])
{
	int days;
	cout << "请输入天数:"<<endl;
	cin >> days;
	cout << "一共可卖：" <<(days>=30?(29 + 0.75 * (days-29)):29) << endl;
	return 0;
}

