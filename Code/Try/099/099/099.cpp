// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ʹ��ָ��Ѱ���ַ�����Life is brief, and then you die, you know�����е�һ����,����λ�á�
 */

using namespace std;
int main(int argc, char* argv[])
{
	char buf[] = { "Life is brief, and then you die, you know��" };
	char *p = buf;
	int index = 0;
	while (*p) {
		if (*(p + index) == ',') {
			break;
		}
		else {
			index++;
		}
	}
	cout << "��һ��','��λ��:" << index << endl;
	return 0;
}
