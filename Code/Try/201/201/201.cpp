// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>
#include <string>

/*
  �ڳ�����ƣ�������Ҫ���ڱ���һЩ���ݣ����Զ���¼ʱ����Ҫ�����˺ţ���дһ������
  ���ó�������û�������˺ţ�֮�󴴽�һ�����˺�Ϊ�ļ������ļ���
*/

using namespace std;
int main(int argc, char* argv[])
{
	string input;
	cin >> input;
	ofstream ofile;
	ofile.open(input.c_str());
	if (!ofile.fail()) {
		cout << "�����ɹ�." << endl;
		ofile.close();
	}
	else {
		cout << "����ʧ��!" << endl;
	}
	return 0;
}
