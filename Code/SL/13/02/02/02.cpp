#include <iostream>
#include <set>
using namespace std;
void main()
{
	set<int> iSet;    //�������ͼ���
	iSet.insert(1);    //��������
	iSet.insert(3);
	iSet.insert(5);
	iSet.insert(7);
	iSet.insert(9);
	cout << "set:" << endl;
	set<int>::iterator it;    //ѭ������������е�����
	for (it = iSet.begin(); it != iSet.end(); it++)
		cout << *it << endl;
}