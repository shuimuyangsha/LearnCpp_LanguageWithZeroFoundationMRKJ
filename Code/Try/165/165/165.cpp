// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ʵ��CInteger��ת���������ʹ�����ת���ɸ����͡�
*/

using namespace std;

class CInteger {
public:
	CInteger(int val) : m_value(val)
	{
	}
	operator float()
	{
		cout << "ת��Ϊ������:" << endl;
		return (float)m_value;
	}
	int m_value;
};



int main(int argc, char* argv[])
{
	CInteger int_value(1);
	printf("%d\n", int_value);
	printf("%f\n", (float)int_value);
	return 0;
}
