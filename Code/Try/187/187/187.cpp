// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <algorithm>
#include <set>

/*
  ��һ��set�У��洢��ĳ��ѧ����ѧ�����ļ����Գɼ���ʹ��count�����������
  ���з���420�ֵ�ѧ����������
*/

using namespace std;
int main(int argc, char* argv[])
{
	multiset<int> ss;

	ss.insert(420);
	ss.insert(380);
	ss.insert(338);
	ss.insert(249);
	ss.insert(360);
	ss.insert(420);
	int cnt = count(ss.begin(), ss.end(), 420);
	cout << cnt << endl;
	return 0;
}
