#include<iostream>
using namespace std;
void main()
{
	int a = 4, b = 6, c = 8, res1, res2;                // �������
	res1 = a, res2 = b + c;                           // ���� res1��res2��ֵ
	for (int i = 0, j = 0; i < 2; i++)                // ѭ��2��
	{
		printf("y=%d,x=%d\n", res1, res2);     // ���res1��res2��ֵ
	}
}
