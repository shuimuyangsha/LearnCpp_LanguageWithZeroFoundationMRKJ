// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ����ѧ���ࡰCStudent������������Ա�����������䡢�༶��Ҫ�������������
  ����ʱ���Զ���������Ա���и�ֵ��ʹ�������������·�ʽʹ��:
  CStudent stu(��������,��14��, ��������ࡱ)��
*/

using namespace std;

class CStudent {
public:
	CStudent(const char * name, int age, const char * cla) {
		strcpy(m_name, name);
		m_age = age;
		strcpy(m_class, cla);
	}

	char m_name[64];
	int m_age;
	char m_class[64];
};


int main(int argc, char* argv[])
{
	CStudent stu("����", 14, "�������");

	cout << stu.m_name << ", "
		<< stu.m_age << ", "
		<< stu.m_class << "\n";

	return 0;
}
