// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  ���һ���������ú�������һ���ַ������������������ʱ������ò�����ֵ��������
  ����ʱ�����"ʲôҲ��˵���֪���ң�"��
*/

using namespace std;

void Say(const char * str=0) {
  if(str == 0) {
    cout << "ʲôҲ��˵���֪����" << endl;
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
