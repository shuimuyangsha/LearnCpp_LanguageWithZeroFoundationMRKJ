#include <iostream>
using namespace std;
//����CPerson��
class CPerson
{
public:
	CPerson();
	CPerson(int iIndex, short m_shAge, double m_dSalary);
	int m_iIndex;
	short m_shAge;
	double m_dSalary;
	int getIndex();
	short getAge();
	double getSalary();
};
//��Ĭ�Ϲ��캯���г�ʼ��
CPerson::CPerson()
{
	m_iIndex = 0;
	m_shAge = 10;
	m_dSalary = 1000;
}
//�ڴ������Ĺ��캯���г�ʼ��
CPerson::CPerson(int iIndex, short m_shAge, double m_dSalary)
{
	m_iIndex = iIndex;
	m_shAge = m_shAge;
	m_dSalary = m_dSalary;
}
int CPerson::getIndex()
{
	return m_iIndex;
}
//��main�����������ĳ�Աֵ
void main()
{
	CPerson p1;
	cout << "m_iIndex is:" << p1.getIndex() << endl;

	CPerson p2(1, 20, 1000);
	cout << "m_iIndex is:" << p2.getIndex() << endl;
}
