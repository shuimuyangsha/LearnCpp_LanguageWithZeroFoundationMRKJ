#include <iostream>
using namespace std;
template <class type, int len>            //����һ��ģ������
type Max(type array[len])                //���庯��ģ��
{
	type ret = array[0];                //����һ������
	for (int i = 1; i < len; i++)                //��������Ԫ��
	{
		ret = (ret > array[i]) ? ret : array[i];    //�Ƚ�����Ԫ�ش�С
	}
	return ret;                            //�������ֵ
}
void main()
{
	int array[5] = { 1,2,3,4,5 };                    //����һ����������
	int iret = Max<int, 5>(array);                //���ú���ģ��Max
	double dset[3] = { 10.5,11.2,9.8 };            //����ʵ������
	double dret = Max<double, 3>(dset);        //���ú���ģ��Max
	cout << dret << endl;
}
