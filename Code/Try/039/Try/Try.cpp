// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  ��Ƴ���ʱ������������ɲ�������������ʱ����Ĳ�����ִ�в�ͬ�Ķ������磺ĳ����
  �������²�����
  "dir", "mkdir", "cls", "help", "ping"
  ���ڲ���������ĸ���ظ�������ֻ��Ҫ��������ĸ������ȷ�������������д����ʵ����
  �Ϲ��ܡ�
*/

using namespace std;
int main(int argc, char* argv[])
{
  char c;
  cout << "������������ĸ�е�һ���������»س�(d,m,c,h,p):"<< endl;
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

