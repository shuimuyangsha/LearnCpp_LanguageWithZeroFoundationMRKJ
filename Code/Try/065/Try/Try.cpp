// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdarg.h>

/*
  ��д���ݲ��غ���������ʹ�ÿɱ������������������г˿͵�����ֵ����������е�
  ��������1000Kg���򷵻�0�����򷵻�1��
*/

using namespace std;

int CheckSum(int num, ...) {
  va_list ag;
  va_start(ag, num);

  int sum = 0;
  while(num--) {
    int val = va_arg(ag, int); // ȡ������
    sum += val;  // �ۼ�������
  }

  va_end(ag);

  if(sum >1000) {
    return 0;
  }
  else {
    return 1;
  }
}


int main(int argc, char* argv[])
{
  cout << CheckSum(3, 200, 300, 400) << endl;
  cout << CheckSum(4, 200, 300, 400, 500) << endl;
  return 0;
}
