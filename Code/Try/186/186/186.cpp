// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <set>
#include <algorithm>

/*
  ĳ����Ĳ�������һЩ�ظ��Ĳ�������ʹ��adjacent_find�㷨�������ڵ��ظ�����
*/

using namespace std;
int main(int argc, char* argv[])
{
	multiset<string> cSet;
	string strInput;

	cSet.insert("ľ������");
	cSet.insert("��ϲ����");
	cSet.insert("��ϲ����");
	cSet.insert("��ϵ�");
	cSet.insert("��");

	// ����
	multiset<string>::iterator it = adjacent_find(cSet.begin(), cSet.end());
	cout << *it << endl;
	return 0;
}
