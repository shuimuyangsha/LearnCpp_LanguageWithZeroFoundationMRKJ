// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  �����û��˻��࣬���ڱ����û����˻��������룬ʹ�����öԳ�Ա��������и�ֵ��
*/

using namespace std;

class CAccount {
public:
	char username[64];
	char password[64];
};


int main(int argc, char* argv[])
{
	CAccount acc;
	CAccount& acc_ref = acc;
	strcpy(acc_ref.username, "admin");
	strcpy(acc_ref.password, "mingrisoft");

	cout << "username:" << acc.username << endl;
	cout << "password:" << acc.password << endl;

	return 0;
}
