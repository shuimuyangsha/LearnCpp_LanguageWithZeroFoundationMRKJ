#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

/*
  ĳ"vector<CStudent>"�д洢���������ѧ������Ϣ��ʹ���������
  ��������е�ѧ����Ϣ��ÿ��һ����
*/

using namespace std;


class CStudent {
public:
	CStudent(int age, string name) : age_(age), name_(name) {}
	int age_;
	string name_;
};

void main()
{
	vector<CStudent> vs;
	vs.push_back(CStudent(12, "ѧ��һ"));
	vs.push_back(CStudent(4, "��С��"));
	vs.push_back(CStudent(33, "���໶"));
	vs.push_back(CStudent(4, "������"));
	vs.push_back(CStudent(25, "��С��"));
	vs.push_back(CStudent(428, "̷ӽ��"));
	vector<CStudent>::iterator it = vs.begin();
	while (it != vs.end()) {
		cout << it->name_ << ":" << it->age_ << endl;
		++it;
	}
	cout << endl;
}
