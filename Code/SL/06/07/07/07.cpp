#include <iostream>
using namespace std;
int Add(int x, int y)                //�����һ�����غ���
{
	cout << "int add" << endl;    //�����Ϣ
	return x + y;                //���ú�������ֵ
}
double Add(double x, double y)        //����ڶ������غ���
{
	cout << "double add" << endl;    //�����Ϣ
	return x + y;                //���ú�������ֵ
}
int main()
{
	int ivar = Add(5, 2);            //���õ�һ��Add����
	float fvar = Add(10.5, 11.4);    //���õڶ���Add����
	return 0;
}
