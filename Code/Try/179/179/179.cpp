// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <string>

/*
  ����ʹ��vectorģ���࣬�洢ѧ���ĳɼ���������Ϣ�������
*/

using namespace std;

class CStudent {
public:
	CStudent(int sc, std::string name)
		:score_(sc)
		, name_(name)
	{
	}
	int score_;
	std::string name_;
};

int main(int argc, char* argv[])
{
	vector<CStudent> vs;
	vs.push_back(CStudent(100, "����"));
	vs.push_back(CStudent(59, "����"));
	vs.push_back(CStudent(68, "С��"));
	vs.push_back(CStudent(73, "�ν�"));

	for (size_t i = 0; i < vs.size(); ++i) {
		cout << vs[i].name_ << " : " << vs[i].score_ << endl;
	}
	return 0;
}
