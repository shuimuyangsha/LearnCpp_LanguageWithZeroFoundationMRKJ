// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  һλְ�������ϰ�򿨣����Ĺ�λ����13��������111��������ȷ�Ž��������
  "лл����ǩ��"�����������ڿ���̨ģ��˳�����
*/
using namespace std;
int main(int argc, char* argv[])
{

	int card, pass;
	cout << "�����빤��:" << endl;
	cin >> card;
	cout << "����������:" << endl;
	cin >> pass;

	if (card == 13 && pass == 111) {
		cout << "лл����ǩ��" << endl;
	}
	else {
		cout << "���Ż��������!" << endl;
	}
	return 0;
}

