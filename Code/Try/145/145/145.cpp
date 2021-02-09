// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  声明学生类，有一个保存性别的成员变量，类型为char*；在析构函数中，删除这个
  指针释放内存。（光盘\Code\Try\165）
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
			cout << "将会删除内存" << endl;
			delete[] m_sex;
		}
	}
	char * m_sex;
};

int main(int argc, char* argv[])
{
	CStudent st("男");
	cout << st.m_sex << endl;
	return 0;
}
