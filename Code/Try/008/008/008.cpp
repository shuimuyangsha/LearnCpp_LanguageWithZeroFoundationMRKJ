// Try.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <iomanip> // �ص�Ҫ��������ļ�

/*
  �����̨���Բ���ʣ�����4λС�������������루��3.1416��
*/


using namespace std; // ���������ռ�
int main(int argc, char* argv[])
{
	// �������ս��
	double pi = 3.1415926;
	// ����4λС��,����������
	cout << fixed << setprecision(4) << pi << endl;
	return 0;
}

