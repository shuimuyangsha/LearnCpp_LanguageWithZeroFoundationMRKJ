// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ��˾���齱��
  �١�1������һ�Ƚ�������Ʒ�ǡ�42��ʵ硱��
  �ڡ�2���������Ƚ�������Ʒ�ǡ��Ⲩ¯����
  �ۡ�3���������Ƚ�������Ʒ�ǡ���ʪ������
  �ܡ�4��������ο��������Ʒ�ǡ�16G-U�̡���
  ���ݿ���̨����Ľ��ţ������ý��Ŷ�Ӧ�Ľ�Ʒ��
*/

using namespace std;

int main(int argc, char* argv[])
{
	int input;
	cout << "�������н��ȼ�(����[1-4]):" << endl;
	cin >> input;
	if (input == 1) {
		cout << "��һ�Ƚ�������Ʒ�ǡ�42��ʵ硱��" << endl;
	}
	else if (input == 2) {
		cout << "�����Ƚ�������Ʒ�ǡ��Ⲩ¯����" << endl;
	}
	else if (input == 3) {
		cout << "�����Ƚ�������Ʒ�ǡ���ʪ������" << endl;

	}
	else if (input == 4) {
		cout << "����ο��������Ʒ�ǡ�16G-U�̡���" << endl;

	}
	else {
		cout << "�齱���ֲ��ԣ�ֻ������[1-4]" << endl;
	}
	return 0;
}

