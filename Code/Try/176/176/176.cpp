// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ����һ���������ú������Խ���һ��������Ϊ���������������������Ԫ��֮�ͣ�Ҫ���
  �Խ���������������������ַ������飩��
*/

using namespace std;

template<class T>
T sum(T array[], size_t size) {
	T ret = 0;
	for (int i = 0; i < size; ++i) {
		ret += array[i];
	}
	return ret;
}

int main(int argc, char* argv[])
{
	int   array_i[] = { 1,2,3,4 };
	float array_f[] = { 1.0f,2.0f,3.0f,4.0f };

	cout << "��������֮�� = " << sum<int>(array_i, 4) << endl;
	cout << "float������֮�� = " << sum<float>(array_f, 4) << endl;
	return 0;
}
