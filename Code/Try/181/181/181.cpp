// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <set>

/*
  дһ���򣬽����û�������ַ������洢��set�����У����ʹ�õ���������û�����
  �������ַ�����
*/

using namespace std;
int main(int argc, char* argv[])
{
	set<string> ss;

	while (1) {
		string input;
		cout << "����(byte:�˳�)��" << endl;
		cin >> input;
		if (input == "byte") {
			break;
		}
		ss.insert(input);
	}

	for (set<string>::iterator it = ss.begin(); it != ss.end(); ++it) {
		cout << *it << endl;
	}
	return 0;
}
