// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ʹ��forѭ��������ĳ������������Ƿ���������
*/

using namespace std;

int main(int argc, char* argv[])
{
	int input;
	int flag = 1;
	cout << "������һ������2������:" << endl;
	cin >> input;
	for (int i = 2; i < (1 + input / 2) && (flag == 1); ++i) {
		if (input % i == 0) {
			cout << input << "��������" << endl;
			flag = 0;
		}
	}

	if (flag == 1) {
		cout << input << "������" << endl;
	}
	return 0;
}

