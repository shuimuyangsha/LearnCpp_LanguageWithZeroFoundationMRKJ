// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ����һ���������ú�������һ����������a��һ������ָ��pFun���ú������Ը���
  pFun��ָ���ķ�ʽ����a�е�Ԫ�ؽ����������
*/

using namespace std;

void display(int array[], int len, void(*p)(int aint)) {
	for (int i = 0; i < len; ++i) {
		// ֱ�Ӱ�����Ԫ�ؽ�������ָ��������
		p(array[i]);
	}
}

void callback(int aint) {
	// �����ʽ��������˼����ƽ��
	cout << aint * aint << " ";
}
int main(int argc, char* argv[])
{
	int array[] = { 1,2,3,4,5,6 };
	display(array, 6, callback);
	cout << endl;
	return 0;
}
