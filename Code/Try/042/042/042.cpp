// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
/*
  ������������̵ģ������Ӽ�Ǯ�� 5Ԫ�ĺ�10Ԫ�ģ������Ӽ�Ǯ��4Ԫ12Ԫ�ģ�
  д�����������ļ�Ǯ�Ϳ�ζ�жϲ���ӡ���ܳԵ��������ӡ�������"9"��"��"��
  ���"5Ԫ��������"��
*/

using namespace std;
int main(int argc, char* argv[])
{
	int price;
	int taste;

	cout << "�������Ǯ:" << endl;
	cin >> price;

	cout << "�������ζ(1:��,2:��):" << endl;
	cin >> taste;

	if (taste == 1) {
		if (5 <= price && price < 10) {
			cout << "5Ԫ��������" << endl;
		}
		else if (price >= 10) {
			cout << "10Ԫ��������" << endl;
		}
		else {
			cout << "Ǯ̫�٣�ʲôҲ�Բ���" << endl;
		}
	}
	else {
		if (4 <= price && price < 12) {
			cout << "4Ԫ��������" << endl;
		}
		else if (price >= 12) {
			cout << "12Ԫ��������" << endl;
		}
		else {
			cout << "Ǯ̫�٣�ʲôҲ�Բ���" << endl;
		}
	}

	return 0;
}

