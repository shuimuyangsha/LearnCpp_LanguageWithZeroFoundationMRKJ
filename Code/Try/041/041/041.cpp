// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ��˾����������ʳƷ������������ţ�̡����ȡ���֭��ʳƷ������������ɣ��û�����
  �����ťѡ����Ʒ������ifǶ������û��Ķ��������û������빦�ܣ�
*/

using namespace std;
int main(int argc, char* argv[])
{
	int input_a;
	cout << "������(1:����, 2:ʳƷ)" << endl;
	cin >> input_a;
	if (input_a == 1) {
		int input_b;
		cout << "������(1:ţ��,2:����,3:��֭)" << endl;
		cin >> input_b;
		if (input_b == 1) {
			cout << "��ѡ����ţ��" << endl;
		}
		else if (input_b == 2) {
			cout << "��ѡ���˿���" << endl;
		}
		else {
			cout << "��ѡ���˹�֭" << endl;
		}
	}
	else {
		int input_b;
		cout << "������(1:���,2:����)" << endl;
		cin >> input_b;
		if (input_b == 1) {
			cout << "��ѡ�������" << endl;
		}
		else {
			cout << "��ѡ���˱���" << endl;
		}
	}
	return 0;
}

