// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  ����ʵ��������ϸ��ϸ����ֳʵ�飬ÿһ��ϸ����������ɱ���������һ��������ֻ��
  һ��ϸ�������������з��ѳ�����ϸ�������������з��ѳ�4��ϸ�����Դ����ƣ�����
  ��ʮ���������е�ϸ��������
*/

using namespace std;
int main(int argc, char* argv[])
{
  int i = 1;
  int total = 1;
  while(i < 12) {
    cout << "��" << i << "������:" << total << endl;
    total = total * 2;   // ����

    i++;   // ����������
  }
  cout << "��ʮ���������е�ϸ������Ϊ" << total << endl;
  return 0;
}

