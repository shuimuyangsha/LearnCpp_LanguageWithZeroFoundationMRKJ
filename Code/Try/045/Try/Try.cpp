// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  ��������Ϸ������Ŀ������Ϊ147��ʹ��whileѭ��ʵ�ֿ���̨�Ķ�����룬
  ϵͳ��ʾ���������ƫ����ƫС���¶���ֹ����
*/

using namespace std;
int main(int argc, char* argv[])
{
	cout << "����������" << endl;
  int input = 0;
  cin >> input;
  while(input != 147){
    if(input > 147) {
      cout << "����ƫ��,����������" << endl;
      cin >> input;
    }
    else if(input < 147){
      cout << "����ƫС,����������" << endl;
      cin >> input;
    }
    else {
      cout << "���¶���!" << endl;
    }
  }
	return 0;
}

