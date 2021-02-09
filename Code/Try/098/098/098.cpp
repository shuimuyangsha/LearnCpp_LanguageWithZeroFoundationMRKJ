// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ��ȫ����ĺ������ú������Ը������������������ֵ��
  void PrintByType(void *p, int type) {
  switch(type) {
  case 0: // int��
  // ��ȫ����
  case 1: // char��
  // ��ȫ����
  case 2: // float��
  // ��ȫ����
  default:
  cout << "���ܴ��������:" << type <<endl;
  break;
  }
  }

*/

using namespace std;

void PrintByType(void *p, int type) {
	switch (type) {
	case 0: // int��
		cout << *(int *)p << endl;
		break;
	case 1: // char��
		cout << *(char *)p << endl;
		break;
	case 2: // float��
		cout << *(float *)p << endl;
		break;
	default:
		cout << "���ܴ��������:" << type << endl;
		break;
	}
}


int main(int argc, char* argv[])
{
	int aint = 100;
	char achar = 'A';
	float afloat = 3.14f;
	double adouble = 1234.0;
	PrintByType(&aint, 0);
	PrintByType(&achar, 1);
	PrintByType(&afloat, 2);
	PrintByType(&adouble, 3);
	return 0;
}
