// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  �����´��룺
  int a=0x12345678;
  void * p = &a;
  ����aΪ4�ֽڵ����������Խ�a��ÿһ���ֽڵ�������������ս��Ϊ��
  12
  34
  56
  78

 */

using namespace std;
int main(int argc, char* argv[])
{
	int a = 0x12345678;
	void * p = &a;
	char * pc = (char*)p;
	cout << hex << (int)(*(pc + 3)) << endl;
	cout << hex << (int)(*(pc + 2)) << endl;
	cout << hex << (int)(*(pc + 1)) << endl;
	cout << hex << (int)(*(pc + 0)) << endl;
	return 0;
}
