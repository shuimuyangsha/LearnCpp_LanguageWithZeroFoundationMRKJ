// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <string>

/*
  ����ʹ��vectorģ���࣬�洢�ֿ���Ʒ��Ϣ��������Ʒ�����������ۺͲ���
*/

using namespace std;

class CGoods {
public:
	CGoods(int sc, std::string name, string made_)
		:price_(sc)
		, name_(name)
		, made_by_(made_)
	{
	}
	int price_;
	std::string name_;
	std::string made_by_;
};

int main(int argc, char* argv[])
{
	vector<CGoods> vs;
	vs.push_back(CGoods(100, "������", "�Ϻ�"));
	vs.push_back(CGoods(39, "�·�", "����"));
	vs.push_back(CGoods(38, "����", "����"));
	vs.push_back(CGoods(33, "�ǹ�", "�Ϻ�"));

	for (size_t i = 0; i < vs.size(); ++i) {
		cout << vs[i].name_ << " : " << vs[i].price_ << endl;
	}
	return 0;
}
