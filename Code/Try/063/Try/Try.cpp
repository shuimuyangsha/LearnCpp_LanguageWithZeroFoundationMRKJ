// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  ���һ������������һ������falseʱ���������"�ص�"�������������򴫵ݲ���
  Ϊtrueʱ���������"����"��
*/

using namespace std;
void Open(bool bOpen = true) {
  if(bOpen) {
    cout << "����" << endl;
  }
  else {
    cout << "�ص�" << endl;
  }
}
int main(int argc, char* argv[])
{

  Open(false);
  Open();
  Open(true);
  return 0;
}
 
