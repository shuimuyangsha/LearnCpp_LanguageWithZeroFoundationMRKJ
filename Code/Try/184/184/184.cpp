// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <set>

/*
  �ڼ����д洢һЩѧ��������Ȼ�����ѧ�����������Ҹ�ѧ��
*/


using namespace std;
int main(int argc, char* argv[])
{
	set<string> cSet;    //����set���󴴽��ַ����͵ļ���
	string strInput;

	cSet.insert("����С");        //����Ԫ��
	cSet.insert("�׷�");
	cSet.insert("֣����");
	cSet.insert("�����");

	cout << "����Ҫ���ҵ�ѧ������:" << endl;
	cin >> strInput;

	set<string>::iterator it = cSet.find(strInput);        //�ڼ����в���ָ����Ԫ��
	cout << "start find:" << strInput << endl;
	if (it == cSet.end())    //û�ҵ�Ԫ��
		cout << "not found" << endl;
	else        //�ҵ�Ԫ��
		cout << "found" << endl;
	return 0;
}
