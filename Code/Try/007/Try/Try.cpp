// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip> // �ص�Ҫ��������ļ�

/*
  ���е�������Ϊ2.95%������������д���10000Ԫ��
  һ������ȡ������Ǯ����С���������λ��
  ���㹫ʽ��
  ����+��Ϣ = 0.0295 * 10000 +10000
*/


using namespace std; // ���������ռ�
int main(int argc, char* argv[])
{
  // �������ս��
  double rate = 0.00295;
  double total = rate * 10000 + 10000;

  // �Թ̶���ʽ���������2λС��
  cout << fixed << setprecision(2) << total << endl;
  return 0;
}

