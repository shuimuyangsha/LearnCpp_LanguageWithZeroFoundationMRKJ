// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ����һ���ܹ����ģ�庯���������ظ�ģ�庯����ʹ����ԱȽ��ַ����Ĵ�С��
*/

using namespace std;

template<class T>
T max(T a, T b) {
	return a > b ? a : b;
}

const char * max(const char *a, const char * b) {
	if (strcmp(a, b)) {
		return b;
	}
	else {
		return a;
	}
}

int main(int argc, char* argv[])
{
	cout << "���ֵ��" << max(10, 1) << endl;
	cout << "���ֵ��" << max('a', 'b') << endl;
	cout << "���ֵ��" << max("hi", "mr") << endl;
	return 0;
}
