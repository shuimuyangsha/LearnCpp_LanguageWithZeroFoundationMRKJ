// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <set>
#include <algorithm>

/*
  һ��ѧУ��ѧ���У��п�����һЩͬ����ͬѧ��ʹ��multiset�������洢ѧ����
  ���ϣ���ʹ��adjacent_find�㷨�������ڵ��ظ����֡�
*/


using namespace std;
int main(int argc, char* argv[])
{
	multiset<string> cSet;
	string strInput;

	cSet.insert("����С");
	cSet.insert("�׷�");
	cSet.insert("֣����");
	cSet.insert("֣����");
	cSet.insert("�����");

	// ����
	multiset<string>::iterator it = adjacent_find(cSet.begin(), cSet.end());
	cout << *it << endl;
	return 0;
}
