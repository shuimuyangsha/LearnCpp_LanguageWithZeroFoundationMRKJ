// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  �Զ����������������ϣ��۸�ֱ�Ϊ3Ԫ��5Ԫ��7Ԫ���Զ���������֧��1ԪӲ��֧����
  ���д���������Զ��շ�ϵͳ��
*/

using namespace std;
int main(int argc, char* argv[])
{
  int money = 0;
  int temp;
  do {
    cout << "��Ͷ��1ԪӲ��:"<< endl;
    cin >> temp;
    if(temp != 1) {
      cout << "��Ͷ�����ԪӲ�ң�������Ҫ��!" << endl;
    }
    else {
      money ++;
      if(money == 3) {
        cout << "����3Ԫ����" << endl;
      }
      else if (money == 5) {
        cout << "����5Ԫ����" << endl;
      }
      else if(money == 7) {
        cout << "����7Ԫ����" << endl;
      }
    }
  } while(money <7 );

  return 0;
}

