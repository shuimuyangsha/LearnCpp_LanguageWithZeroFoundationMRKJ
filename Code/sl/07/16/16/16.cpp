#include <iostream>
using namespace std;
void swap(int *a, int *b)                     //����a��bָ���������ַ��ֵ(ָ�봫��)
{
	int tmp;                                //����һ����ʱ����
	tmp = *a;                                //��aָ���ֵ����tmp
	*a = *b;                                //��bָ���ֵ����aָ���λ��
	*b = tmp;                                //��tmp����bָ���λ��
}
void swap(int a, int b)                     //����a��b��ֵ(ֵ����)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
void main()
{
	int x, y;
	int *p_x, *p_y;                        //������������ָ��
	cout << " input two number " << endl;
	cin >> x;                            //��x��y��ֵ
	cin >> y;
	p_x = &x;
	p_y = &y;                        //����ָ��ֱ�ָ��x��y�ĵ�ַ
	cout << "��ָ�봫�ݲ�������" << endl;
	swap(p_x, p_y);                        //ִ�е��ǲ����б�Ϊָ���swap����
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
	cout << "��ֵ���ݲ�������" << endl;
	swap(x, y);                            //ִ�е��ǲ����б�Ϊ���ͱ�����swap����
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
}
