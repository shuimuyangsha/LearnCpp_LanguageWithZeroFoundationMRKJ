//#pragma once
class CPerson
{
public:
	//���ݳ�Ա
	int m_iIndex;
	char m_cName[25];
	short m_shAge;
	double m_dSalary;
	//��Ա����
	short getAge();
	int setAge(short sAge);
	int getIndex();
	int setIndex(int iIndex);
	char* getName();
	int setName(char cName[25]);
	double getSalary();
	int setSalary(double dSalary);
};
