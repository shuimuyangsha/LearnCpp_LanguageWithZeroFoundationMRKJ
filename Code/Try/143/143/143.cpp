// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ����һ��ͼ���࣬���ڴ�������Ƹ��ƹ��캯����
*/

using namespace std;

class CBook {
public:
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
	CBook book("��ѧ");

	CBook book2(book);

	cout << book.m_name << endl;
	cout << book2.m_name << endl;

	// �޸ĵ�һ�����������
	strcpy(book.m_name, "��ѧ�ڶ���");

	cout << book.m_name << endl;
	cout << book2.m_name << endl;


	return 0;
}
