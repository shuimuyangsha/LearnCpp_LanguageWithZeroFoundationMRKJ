// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ��һ������a[]����������ѧ���ĳɼ���дһ�������ӡ�����м���ĳɼ���
  ����a[]��ֵ���£�
  int a [5] = {59, 90, 45, 78, 20};
*/

using namespace std;
int main(int argc, char* argv[])
{

	int a[5] = { 59, 90, 45, 78, 20 };
	for (int i = 0; i < 5; ++i) {
		if (a[i] >= 60) {
			cout << "a[" << i << "] = " << a[i] << endl;
		}
	}
	return 0;
}

