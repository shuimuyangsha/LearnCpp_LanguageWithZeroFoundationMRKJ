// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  创建函数park()，用于记录停车场停车位数量，每次进入一辆车则执行此方法。
  停车场共有30个停车位，进入四辆车之后，停车场还剩多少停车位。
*/

using namespace std;
void park(){
	static int count = 30;
	count = count - 1;
	cout << "此时剩余停车位数量：" << count << endl;
}


int main(int argc, char* argv[])
{
  for(int i=0; i<4; ++i) {
    park();
  }
  return 0;
}
