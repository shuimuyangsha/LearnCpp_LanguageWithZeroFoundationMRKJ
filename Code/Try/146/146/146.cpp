// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  �����绰���࣬Ϊ���������캯���������������ڵ绰����������ʱ����մ˶���󶨵�
  ���֤�š�
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
			cout << "����ɾ���ڴ�" << endl;
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
