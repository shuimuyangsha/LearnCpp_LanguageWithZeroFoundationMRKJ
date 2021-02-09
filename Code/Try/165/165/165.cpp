// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  实现CInteger的转换运算符，使其可以转换成浮点型。
*/

using namespace std;

class CInteger {
public:
	CInteger(int val) : m_value(val)
	{
	}
	operator float()
	{
		cout << "转化为浮点数:" << endl;
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
