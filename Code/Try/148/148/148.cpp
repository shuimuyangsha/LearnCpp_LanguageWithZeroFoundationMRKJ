// Try.cpp : Defines the entry point for the console application.
//


#include <iostream>

#include "Try.h"
/*
  �����û��˻��࣬���޸����뷽����Ϊ˽�У�����������Ա�࣬����Ա����һ���û��˻�
  �����Ԫ������ͨ���˺���Ҳ�����޸��û����롣
*/

using namespace std;

CAccount::CAccount(const char * password) {
	strcpy(pass, password);
}

void CAccount::OutputPassword() {
	cout << pass << endl;
}

void CManager::SetPassword(CAccount& acc, const char * password) {
	strcpy(acc.pass, password);
}


int main(int argc, char* argv[])
{
	CAccount acc("123456");
	acc.OutputPassword();

	CManager admin;
	admin.SetPassword(acc, "www.mingrisoft.com");
	acc.OutputPassword();
	return 0;
}
