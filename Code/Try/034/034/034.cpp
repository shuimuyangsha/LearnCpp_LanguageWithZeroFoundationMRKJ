// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  С�������Ϊ 11��29�գ�������������ڣ�Ϊһ�����֣���ʹ���������ʽ�ж����
  �����Ƿ��ǺϷ������ڣ����ж�����������Ƿ���С������ա�
*/
using namespace std;

int main(int argc, char* argv[])
{
	int month, day;
	cout << "��������:" << endl;
	cin >> month;
	cout << "��������:" << endl;
	cin >> day;

	(month <= 0 || month > 12 || day <= 0 || day >= 30)
		? cout << "���ǺϷ�������"
		: (11 == month && 29 == day)
		? cout << "������С�������" << endl
		: cout << "���첻��С�������" << endl;

	return 0;
}

