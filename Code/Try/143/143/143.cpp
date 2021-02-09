// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  声明一个图书类，并在此类中设计复制构造函数。
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
	CBook book("数学");

	CBook book2(book);

	cout << book.m_name << endl;
	cout << book2.m_name << endl;

	// 修改第一个对象的名字
	strcpy(book.m_name, "数学第二版");

	cout << book.m_name << endl;
	cout << book2.m_name << endl;


	return 0;
}
