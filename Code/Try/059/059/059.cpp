// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <iomanip>

/*
  �ҹ��Ŵ��ĳ˷��ھ�����"�žŰ�ʮһ"��ʼ�� ��"һһ��һ"��������˳���ǵ���
  ���ģ����ó������"����"�ĳ˷��ھ���
   9* 9 = 81 9*8=72 9*7=63 ...

*/

using namespace std;
int main(int argc, char* argv[])
{
	for (int i = 9; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			cout << setw(2) << i
				<< "*"
				<< setw(2) << j
				<< " = "
				<< setw(2) << i * j
				<< " ";
		}
		cout << endl;
	}
	return 0;
}

