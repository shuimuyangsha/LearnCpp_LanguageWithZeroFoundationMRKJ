// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ����ѧ���࣬��һ�������Ա�ĳ�Ա����������Ϊchar*�������������У�ɾ�����
  ָ���ͷ��ڴ档������\Code\Try\165��
*/

using namespace std;

class CStudent
{
public:
	CStudent(const char * sex) {
		int len = 1 + strlen(sex);
		m_sex = new char[len];
		strcpy(m_sex, sex);
	}
	~CStudent() {
		if (m_sex) {
			cout << "����ɾ���ڴ�" << endl;
			delete[] m_sex;
		}
	}
	char * m_sex;
};

int main(int argc, char* argv[])
{
	CStudent st("��");
	cout << st.m_sex << endl;
	return 0;
}
