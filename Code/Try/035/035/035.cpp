// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ����һ��������ݵ����֣�ʹ��if�жϸ�����Ƿ�Ϸ���
  ֮��ʹ���������ʽ�жϸ����Ƿ������ꡣ
*/

using namespace std;
int main(int argc, char* argv[])
{
	int year;
	cin >> year;
	if (year <= 0) {
		cout << "���벻�Ϸ������������0�����" << endl;
		return 0;
	}

	/*
	  �ܱ�4�����Ĵ�������ꣻ�ܱ�100���������ܱ�400��������ݲ������ꣻ
	*/
	((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		? cout << "������" << endl
		: cout << "��������" << endl;
	return 0;
}

