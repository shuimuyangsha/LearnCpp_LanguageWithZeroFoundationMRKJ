// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ��������0��ʾ����û��������1��ʾ�������ţ���6���������г�һ�����һ����Ϊ��
  ��a{1,0,0,1,0,0}�����ҵ�����һ�����ŵĵ���λ�ã�����ʾ�õ���ǰһ�������Ƿ����š�
*/

using namespace std;
int main(int argc, char* argv[])
{
	int a[6] = { 1,0,0,1,0,0 };

	int indexLast;
	for (indexLast = 5; indexLast >= 0; indexLast--) {
		if (a[indexLast] == 1) {
			break;
		}
	}
	cout << "������һ�����ŵĵ���Ϊ:" << indexLast << endl;

	int *p = &a[indexLast];
	p--;
	if (*p == 1) {
		cout << "ǰһ����������" << endl;
	}
	else {
		cout << "ǰһ������û��" << endl;
	}
	return 0;
}
