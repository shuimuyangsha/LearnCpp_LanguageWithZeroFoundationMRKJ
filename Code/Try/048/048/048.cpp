// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ģ���û���¼������û�����������󣬾�Ҫ���û��������룬ֱ���û�������ȷ���롣
*/

using namespace std;
int main(int argc, char* argv[])
{
	int password = 123456;
	int input;
	do {
		cout << "��������������:" << endl;
		cin >> input;
	} while (input != password);

	if (input == password) {
		cout << "��¼�ɹ�!" << endl;
	}
	return 0;
}

