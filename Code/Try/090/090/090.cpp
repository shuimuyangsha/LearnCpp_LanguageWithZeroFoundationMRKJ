// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  �ж��û�����������Ƿ���6λ��
*/

using namespace std;
int main(int argc, char* argv[])
{
	char input[1024];
	while (1) {
		cout << "������һ��6λ������:" << endl;
		cin >> input;
		if (strlen(input) != 6) {
			cout << "���������6λ!" << endl;
		}
		else {
			cout << "�������Ҫ��" << endl;
			break;
		}
	}
	return 0;
}
