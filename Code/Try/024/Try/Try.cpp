// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  ��˾���齱��
    �١�1������һ�Ƚ�������Ʒ�ǡ�42��ʵ硱��
    �ڡ�2���������Ƚ�������Ʒ�ǡ��Ⲩ¯����
    �ۡ�3���������Ƚ�������Ʒ�ǡ���ʪ������
    �ܡ�4��������ο��������Ʒ�ǡ�16G-U�̡���
*/

using namespace std;
int main(int argc, char* argv[])
{
  int iInput;
  cout << "������һ������:" << endl;
  cin >> iInput; //����һ������

  if(iInput == 1) {
    cout << "��һ�Ƚ�������Ʒ�ǡ�42��ʵ硱��"<<endl;
    return 0;
  }
  if(iInput == 2) {
    cout << "�����Ƚ�������Ʒ�ǡ��Ⲩ¯����" << endl;
    return 0;
  }
  if(iInput == 3) {
    cout << "�����Ƚ�������Ʒ�ǡ���ʪ������" << endl;
    return 0;
  }
  if(iInput == 4) {
    cout << "����ο��������Ʒ�ǡ�16G-U�̡���" << endl;
    return 0;
  }

  cout << "������1,2,3��4"<< endl;
  return 0;
}

