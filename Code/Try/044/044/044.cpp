// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  �ж���������֣��Ƿ��� 1024��9528�� 65536�Ĺ�Լ����
*/

using namespace std;
int main(int argc, char* argv[])
{
	int input;
	cin >> input;
	if (1024 % input == 0) {
		if (9528 % input == 0) {
			if (65536 % input == 0) {
				cout << "��1024��9528��65536�Ĺ�Լ��" << endl;
				return 0;
			}
		}
	}

	cout << input << "����1024��9528��65536�Ĺ�Լ��" << endl;
	return 0;
}

