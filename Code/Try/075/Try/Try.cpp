// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  ��������park()�����ڼ�¼ͣ����ͣ��λ������ÿ�ν���һ������ִ�д˷�����
  ͣ��������30��ͣ��λ������������֮��ͣ������ʣ����ͣ��λ��
*/

using namespace std;
void park(){
	static int count = 30;
	count = count - 1;
	cout << "��ʱʣ��ͣ��λ������" << count << endl;
}


int main(int argc, char* argv[])
{
  for(int i=0; i<4; ++i) {
    park();
  }
  return 0;
}
