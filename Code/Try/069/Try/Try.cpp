// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  ��һ�Դ�����ÿ����һ��С���ӣ�ÿ���������ڳ���һ���º������̣��������Ӷ�����
  �����ʣ�һ������һ���ܷ�ֳ�ɶ��ٶ����ӣ���
*/

using namespace std;

/*
| month | 1 | 2 | 3 | 4 | 5 | 6 |  7 |  8 |  9 | 10 | 11 |  12 |
|-------+---+---+---+---+---+---+----+----+----+----+----+-----|
| big   | 1 | 1 | 2 | 3 | 5 | 8 | 13 | 21 | 34 | 55 | 89 | 144 |
| small | 0 | 1 | 1 | 2 | 3 | 5 |  8 | 13 | 21 | 34 | 55 |  89 |

��12�������ӵ�����= ���´����ӵ�����+����С���ӵ�����
                 = ��13���´����ӵ�����
*/


int calc(int month) {
  if(month==1)       // �� 1 ���£�ֻ��һ�Զ�������
    return 1;
  if(month == 2)     // �� 2 ���£�ֻ��һ�Զ�������
    return 1;
  // �����·ݵ���������= �ϸ��µ���������+���ϸ��µ���������
  return calc(month-1) + calc(month-2);
}


int main(int argc, char* argv[])
{
  int month = 12;
  cout << "��" << month << "���µ���������=" << calc(1+month) << endl;
  return 0;
}