// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ������������ȡǮ��������ȷ����ȡǮ����ȷ������Ϊ574824
*/

using namespace std;
int main(int argc, char* argv[])
{
	char password[] = { "574824" };
	while (1) {
		char input[1024];
		cin >> input;
		if (0 == strcmp(password, input)) {
			cout << "������ȷ������ȡǮ��" << endl;
			break;
		}
		else {
			cout << "���벻��ȷ�����������룺" << endl;
		}
	}
	return 0;
}
