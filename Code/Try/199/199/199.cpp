// Try.cpp : Defines the entry point for the console application.
//


#include <iostream>
using namespace std;
#include <sstream>

/*
  ����дһ��������ʹ�á�istrstream�����ַ���ת��Ϊ�������ַ��ء�
*/

int ToInt(char * str) {
	std::istringstream iss(str);
	int i;
	iss >> i;
	return i;
}
int main(int argc, char* argv[])
{
	 char str[10] = "123456";
	cout << ToInt(str) << endl;
	return 0;
}
