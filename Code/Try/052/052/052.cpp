// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ��һ�ھ���10�ף�һֻ��ţ�Ӿ����򾮿������������������ף��������»�һ�ף���
  ����������������ڣ�
*/

using namespace std;
int main(int argc, char* argv[])
{
	int day = 0;
	int flag = 1;
	int high = 0;
	while (high < 10) {
		day += 1;
		high += 2;
		if (high >= 10) {
			break;
		}
		high -= 1;
	}
	cout << "��" << day << "����������" << endl;
}

