#include <iostream>
using std::cout;
using std::endl;
int* pointerGet(int* p)
{
	int i = 9;
	cout << "��������i�ĵ�ַ" << &i << endl;
	cout << "��������i��ֵ:" << i << endl;
	p = &i;
	return p;
}
int main()
{
	int* k = NULL;
	cout << "k�ĵ�ַ:" << k << endl;            //���k�ĳ�ʼ��ַ
	cout << "ִ�к�������k���躯������ֵ" << endl;
	k = pointerGet(k);                    //���ú������һ��ָ�����i�ĵ�ַ��ָ��
	cout << "k�ĵ�ַ:" << k << endl;            //���k���µ�ַ(i�ĵ�ַ)
	cout << "k��ָ���ڴ������:" << *k << endl;    //���һ�������
}
