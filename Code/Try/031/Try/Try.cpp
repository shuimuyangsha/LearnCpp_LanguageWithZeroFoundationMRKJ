// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  �Ƴ̳��Ʒѱ�׼����3�������𲽼�Ϊ6Ԫ������3���ﰴÿ����2Ԫ�շѣ��������Ƴ̳��������á�
  x<3?6:(6 + (x-3)*2)
*/

using namespace std;
int main(int argc, char* argv[])
{
	float distance;
	cout << "���������(��λ������):"<<endl;
	cin >> distance;
	cout << "�ܷ���Ϊ��" << (distance<3?6:(6 + (distance-3)*2)) << endl;
	return 0;
}

