#include <iostream>
using namespace std;
void main()
{
	int i, a[10];
	int *p;
	//����ѭ�����ֱ�Ϊ10��Ԫ�ظ�ֵ
	for (i = 0; i < 10; i++)
		a[i] = i;
	//�������е�10��Ԫ���������ʾ�豸
	p = &a[0];
	for (i = 0; i < 10; i++, p++)
		cout << *p << endl;
}
