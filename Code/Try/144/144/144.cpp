// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  声明一个图书类型的指针变量p，动态申请内存并初始化；再定义一个变量st在
  定义时， 使用指针p初始化st； 释放掉指针p的内存，然后输出变量st的
  各个成员变量的值。
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
	strcpy(p->m_name, "数学");

	// 定义一个变量st并使用指针初始化
	// 此处会调用拷贝构函数
	CBook st = *p;

	delete p;          // 释放掉指针p的内存

	cout << st.m_name << endl;

	return 0;
}
