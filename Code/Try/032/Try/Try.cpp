// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  ĳͬѧ��У԰�����շѱ�׼��һԪһ�죬����ʱ�䳬��30�죬��ÿ�죨����30�죩
  0.75Ԫ�շѣ������ͬѧ��������Ǯ��
*/

using namespace std;
int main(int argc, char* argv[])
{
	int days;
	cout << "����������:"<<endl;
	cin >> days;
	cout << "һ��������" <<(days>=30?(29 + 0.75 * (days-29)):29) << endl;
	return 0;
}

