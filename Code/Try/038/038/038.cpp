// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ��֪һ�����ݲ���3�����أ��ֱ�Ϊ����1������2������3��
  ��һ���ʵƴ���һ������4;
  ����5�Ϳ���6����һ���׳�ƺͽ��ܵ�;
  ����һ�����֣��������˿��أ�����ĸ���������
*/

using namespace std;
int main(int argc, char* argv[])
{
	int input;
	cout << "�����뿪��(1-6):" << endl;
	cin >> input;
	if (input == 1) {
		cout << "������" << endl;
	}
	if (input == 2) {
		cout << "������" << endl;
	}
	if (input == 3) {
		cout << "������" << endl;
	}
	if (input == 4) {
		cout << "�ʵ���" << endl;
	}

	if (input == 5) {
		cout << "�׳����" << endl;
		cout << "���ܵ���" << endl;
	}

	if (input == 6) {
		cout << "�׳����" << endl;
		cout << "���ܵ���" << endl;
	}


	return 0;
}

