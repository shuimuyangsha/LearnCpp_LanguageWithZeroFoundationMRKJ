// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  ĳ�̳�Ա�������ڿⷿ�����·�����ʱ����һλ�˿ͣ���λԱ���������ϵĹ�����ȥ��
  ���˿͡���ģ��˳�����
*/

using namespace std;

int main(int argc, char* argv[])
{
  char c;
  cout << "����0����������" << endl;
  cout << "����1���д��˿�" << endl;
 ZhengLi:
  cin >> c;
  if(c != '1') {
    cout << "��������" << endl;
    goto ZhengLi;
  }
  else {
    goto ZhaoDai;
  }
 ZhaoDai:
  cout << "�д��˿�" << endl;
  return 0;
}

