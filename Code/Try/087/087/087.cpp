
// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  дһ�����򣬽����û������룬ÿ���û�����һ�����ʣ������������ʣ����û�����
  ��exit��������Ӧ�����bye�������˳���
*/

using namespace std;
int main(int argc, char* argv[])
{
	while (1) {
		char input[1024];
		cin >> input;
		if (0 == strcmp(input, "exit")) {
			cout << "bye" << endl;
			return 0;
		}
		else {
			cout << input << endl;
		}
	}
	return 0;
}
