// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  Ӣ����ʦҪ��ͬѧ��how��䣬Ҫ����ӳ��Ȳ�������3�����ö���30������д���
  �����������д����ʧ�ܡ�
*/

using namespace std;
int main(int argc, char* argv[])
{
	char input[1024];
	cin >> input;
	size_t len = strlen(input);
	if (len >= 3 && len <= 30) {
		cout << "ѡ��ɹ�." << endl;
	}
	else {
		cout << "ѡ��ʧ��!" << endl;
	}
	return 0;
}
