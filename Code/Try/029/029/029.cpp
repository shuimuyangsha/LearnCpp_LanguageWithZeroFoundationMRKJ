// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���һ���������С��Ϸ��������������֣�ֱ�ӽ����Ӧ�Ĺؿ����磬
  �����������3������̨���"��ǰ���������"��
*/
using namespace std;

int main(int argc, char* argv[])
{
	int input;
	cout << "������ؿ�(����[1-5]):" << endl;
	cin >> input;
	if (input == 1) {
		cout << "��ǰ�����һ��" << endl;
	}
	else if (input == 2) {
		cout << "��ǰ����ڶ���" << endl;
	}
	else if (input == 3) {
		cout << "��ǰ���������" << endl;

	}
	else if (input == 4) {
		cout << "��ǰ������Ĺ�" << endl;

	}
	else if (input == 5) {
		cout << "��ǰ��������" << endl;

	}
	else {
		cout << "������ؿ�(����[1-5])" << endl;
	}
	return 0;
}

