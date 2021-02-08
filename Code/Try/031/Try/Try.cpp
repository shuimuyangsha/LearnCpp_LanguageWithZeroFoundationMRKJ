// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  计程车计费标准，在3公里内起步价为6元，超出3公里按每公里2元收费，计算坐计程车所花费用。
  x<3?6:(6 + (x-3)*2)
*/

using namespace std;
int main(int argc, char* argv[])
{
	float distance;
	cout << "请输入距离(单位：公里):"<<endl;
	cin >> distance;
	cout << "总费用为：" << (distance<3?6:(6 + (distance-3)*2)) << endl;
	return 0;
}

