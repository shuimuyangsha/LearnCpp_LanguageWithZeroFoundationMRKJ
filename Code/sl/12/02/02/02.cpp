#include <iostream >
#include <string >
using namespace std;
template<class Type>
Type min(Type a, Type b)//���庯��ģ��
{
	if (a < b)
		return a;
	else
		return b;
}
char * min(char * a, char * b)// ���غ���ģ��
{
	if (strcmp(a, b))
		return b;
	else
		return a;
}
void main()
{
	cout << "��Сֵ��" << min(10, 1) << endl;
	cout << "��Сֵ��" << min('a', 'b') << endl;
	cout << "��Сֵ��" << min("hi", "mr") << endl;
}
