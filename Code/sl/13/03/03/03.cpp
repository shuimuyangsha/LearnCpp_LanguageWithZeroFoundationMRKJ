#include <iostream>
#include <set>
using namespace std;
void main()
{
	set<char> cSet;    //����set���󴴽��ַ����͵ļ���
	cSet.insert('B');        //����Ԫ��
	cSet.insert('C');
	cSet.insert('D');
	cSet.insert('A');
	cSet.insert('F');
	cout << "old set:" << endl;
	set<char>::iterator it;        //ѭ����ʾ�����е�Ԫ��
	for (it = cSet.begin(); it != cSet.end(); it++)
		cout << *it << endl;
	char cTmp;
	cTmp = 'D';
	it = cSet.find(cTmp);        //�ڼ����в���ָ����Ԫ��
	cout << "start find:" << cTmp << endl;
	if (it == cSet.end())    //û�ҵ�Ԫ��
		cout << "not found" << endl;
	else        //�ҵ�Ԫ��
		cout << "found" << endl;
	cTmp = 'G';
	it = cSet.find(cTmp);        //����ָ����Ԫ��
	cout << "start find:" << cTmp << endl;
	if (it == cSet.end())    //û�ҵ�Ԫ��
		cout << "not found" << endl;
	else        //�ҵ�Ԫ��
		cout << "found" << endl;
}
