#include <iostream>
using namespace std;
#include <sstream>
void main()
{
	char buf[] = "12345678";
	int i, j;
	std::istringstream s1(buf);
	s1 >> i;				//���ַ���ת��Ϊ����
	std::istringstream s2(buf, 3);
	s2 >> j;				//���ַ���ת��Ϊ����
	cout << i + j << endl;		//�����������
}
