// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���һ�����򣬸ó�����������в�������������ã�[����Ĳ���]�������û�в����������������������֣�����Ȼ���˳�����
*/

using namespace std;
int main(int argc, char* argv[])
{
	if (argc <= 1) {
		cout << "��������������" << endl;
	}
	else {
		cout << "����:" << argv[1] << endl;
	}
	return 0;
}
