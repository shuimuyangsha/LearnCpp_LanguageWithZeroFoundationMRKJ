// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���ѧ����;����࣬����һ��ѧ�����󣬽�ѧ������ǿ��ת��Ϊ���˶���
*/

using namespace std;

class CSoldier
{
public:
	CSoldier(const char * name) {
		strcpy(this->name, name);
	}
	CSoldier(const CSoldier& other) {
		if (this != &other) {
			strcpy(this->name, other.name);
		}
	}
	char name[64];
};


class CStudent {
public:
	CStudent(const char * name)
	{
		strcpy(this->name, name);
	}
	operator CSoldier () const
	{
		cout << this->name << "���ʴ��֣�" << endl;
		return CSoldier(this->name);
	}
	char name[64];
};

int main(int argc, char* argv[])
{
	CStudent st("��С��");
	CSoldier sl = (CSoldier)st;
	return 0;
}
