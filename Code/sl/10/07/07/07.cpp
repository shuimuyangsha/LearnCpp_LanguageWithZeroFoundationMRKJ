#include<iostream>

namespace MyName                        //���������ռ�
{
	int iValue = 10;                            //�������ͱ���
}

using namespace std;                        //ʹ�������ռ�std
using namespace MyName;                    //ʹ�������ռ�MyName

int main()
{
	cout << iValue << endl;                        //��������ռ��еı���
	return 0;
}
