// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;

/*
  ����һ������"Add(int a, int b, int c) "���ú�������ǰ���������ĺͣ������ʹ洢�ڵ����������С� �����ȷ����Ŀǰ��֪ʶ���ܷ�ʵ�ָú���ʹ����ȷ��ͣ�Ϊʲô��
*/

void Add(int a, int b, int c) {
	c = a + b;
}

int main(int argc, char* argv[])
{
	int a = 1;
	int b = 2;
	int c = 0;
	Add(a, b, c);
	cout << c << endl;
	return 0;
}
/*
  ��������Ϊֵ���ݣ������Ǳ���������������Ŀǰ�޷��ı�ԭ������ֵ��
  ѧ��ָ�������ʱ������ͨ��ָ����������ı������ֵ��
 */

