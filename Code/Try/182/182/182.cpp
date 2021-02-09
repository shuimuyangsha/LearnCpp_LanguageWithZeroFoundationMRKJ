// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <set>

/*
  ʹ��set�����洢һЩ��ʦ�������Ϣ�����
*/

using namespace std;

class CTeacher {
public:
	CTeacher(int age, string name)
		:age_(age)
		, name_(name)
	{
	}
	int age_;
	string name_;
	bool operator<(const CTeacher& other) const
	{
		return this->age_ < other.age_;
	}
};

int main(int argc, char* argv[])
{
	set<CTeacher> ss;
	ss.insert(CTeacher(28, "�Ŵ�"));
	ss.insert(CTeacher(40, "������"));
	for (set<CTeacher>::iterator it = ss.begin(); it != ss.end(); ++it) {
		cout << it->name_ << " : " << it->age_ << endl;
	}
	return 0;
}
