// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义CString类代表字符串， 重载“+”运算符，实现两个字符串的连接功能。
*/

class CString {
public:
	CString()
		: m_data(0)
	{
	}
	CString(const char * str) {
		m_data = new char[strlen(str) + 1];
		strcpy(m_data, str);
	}
	~CString() {
		if (m_data) {
			delete[] m_data;
		}
	}
	// 拷贝构造函数
	CString(const CString& other_string) {
		if (this != &other_string) {
			m_data = new char[strlen(other_string.m_data) + 1];
			strcpy(m_data, other_string.m_data);
		}
	}
	CString operator+(const CString& other_string) {
		int len1 = strlen(m_data);
		int len2 = strlen(other_string.m_data);
		char * tmp = new char[len1 + len2 + 1];
		strcpy(tmp, m_data);
		strcat(tmp, other_string.m_data);
		CString str(tmp);
		return str;
	}
	const char * GetString() const {
		return m_data;
	}
private:

	char * m_data;
};
using namespace std;
int main(int argc, char* argv[])
{
	CString str1("www.");
	CString str2("mingrisoft.com");

	cout << str1.GetString() << endl;
	cout << str2.GetString() << endl;
	cout << (str1 + str2).GetString() << endl;
	return 0;
}
