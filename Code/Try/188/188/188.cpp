// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <set>

/*
  ��һ��vector�У�������ĳ��˾����Ա����ѧ����Ϣ��ʹ��count������ͳ��
  ����ҵ�ڱ�����ѧ��Ա��������


*/

using namespace std;
int main(int argc, char* argv[])
{
	multiset<string> ss;

	ss.insert("������ѧ");
	ss.insert("������ѧ");
	ss.insert("�廪��ѧ");
	ss.insert("������ѧ");
	ss.insert("������ѧ");
	int cnt = count(ss.begin(), ss.end(), "������ѧ");
	cout << cnt << endl;
	return 0;
}
