#include<iostream>
using namespace std;

namespace MyName1                        //���������ռ�
{
	int iValue = 10;
};

namespace MyName2                        //���������ռ�
{
	int iValue = 20;
};

int iValue = 30;                                //ȫ�ֱ���

int main()
{
	cout << MyName1::iValue << endl;            //����MyName1�����ռ��еı���
	cout << MyName2::iValue << endl;            //����MyName2�����ռ��еı���
	cout << iValue << endl;
	return 0;
}
