
// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  ¥����10��̨�ף���¥����һ����1�ף�Ҳ����һ����2�ף���һ������㹲�ж���
  �ֲ�ͬ���߷���

*/

using namespace std;

// �����ж������߷�
int calc (int step) {
  if(step ==1) {
    return 1;        // ̨����һ�ף�ֻ��һ���߷�
  }
  if(step == 2) {
    return 2;        // ̨�������ף��������߷���1:һ��һ��; 2:һ������
  }

  // ̨�׶���2�ף��߷� = ��һ����1�׵��߷�+��һ����2�׵��߷�
  // Ҳ����˵�ǣ�   �߷� = ʣ���99�׵��߷�+ʣ���98�׵��߷���
  return calc (step - 1) + calc(step - 2);
}


int main(int argc, char* argv[])
{
  cout << "����" << calc(10) << "���߷�" << endl;
  return 0;
}
