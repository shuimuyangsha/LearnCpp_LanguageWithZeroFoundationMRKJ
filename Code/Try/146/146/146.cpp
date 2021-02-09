// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  声明电话卡类，为其声明构造函数和析构函数，在电话卡对象销毁时，清空此对象绑定的
  身份证号。
*/

using namespace std;

class CPhoneCard
{
public:
	CPhoneCard(const char * card_id) {
		int len = 1 + strlen(card_id);
		m_card_id = new char[len];
		strcpy(m_card_id, card_id);
	}
	~CPhoneCard() {
		if (m_card_id) {
			cout << "将会删除内存" << endl;
			delete[] m_card_id;
		}
	}
	char * m_card_id;
};

int main(int argc, char* argv[])
{
	CPhoneCard st("220889198812346786");
	cout << st.m_card_id << endl;
	return 0;
}
