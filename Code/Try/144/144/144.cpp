// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ����һ��ͼ�����͵�ָ�����p����̬�����ڴ沢��ʼ�����ٶ���һ������st��
  ����ʱ�� ʹ��ָ��p��ʼ��st�� �ͷŵ�ָ��p���ڴ棬Ȼ���������st��
  ������Ա������ֵ��
*/

using namespace std;

class CBook {
public:
	CBook() {

	}
	CBook(const char * name) {
		strcpy(m_name, name);
	}
	CBook(const CBook& book) {
		if (this != &book) {
			strcpy(this->m_name, book.m_name);
		}
	}
	char m_name[64];
};


int main(int argc, char* argv[])
{
	CBook * p = new CBook;
	strcpy(p->m_name, "��ѧ");

	// ����һ������st��ʹ��ָ���ʼ��
	// �˴�����ÿ���������
	CBook st = *p;

	delete p;          // �ͷŵ�ָ��p���ڴ�

	cout << st.m_name << endl;

	return 0;
}
