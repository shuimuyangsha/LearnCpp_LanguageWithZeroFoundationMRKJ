// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
��ͨ�ƹ�����������ɫ���̻ƣ���123�ֱ����������ɫ��������һ������ʱ����ӡ����
ǰ��ͨ�Ƶ�״̬������������1�����"���ͣ"����������2�����"�̵���"��
*/

using namespace std;
int main(int argc, char* argv[])
{
	int state;
	cout << "������1��2��3" << endl;
	cin >> state;
	switch (state) {
	case 1: {
		cout << "���ͣ" << endl;
		break;
	}
	case 2: {
		cout << "�̵���" << endl;
		break;
	}
	case 3: {
		cout << "�Ƶƻ���" << endl;
		break;
	}
	default: {
		cout << "�������ֲ���ȷ,������1��2��3" << endl;
		break;
	}
	}
	return 0;
}

