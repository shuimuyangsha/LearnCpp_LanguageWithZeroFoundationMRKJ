// Try.cpp : Defines the entry point for the console application.
//


#include <iostream>
using namespace std;
#include <sstream>

/*
  ����дһ�����������������в��������Խ�������ַ���ת���������������
*/

int ToInt(char * str) {
	std::istringstream iss(str);
	int i;
	iss >> i;
	return i;
}

int main(int argc, char* argv[])
{
	if (argc <= 1) {
		cout << "������һ������:" << endl;
		return 0;
	}
	cout << "����Ϊ:" << argv[1] << endl;
	cout << ToInt(argv[1]) << endl;
	return 0;
}
