// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <string>

/*
  试着使用vector模板类，存储仓库物品信息，包括物品的数量、单价和产地
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
	vs.push_back(CGoods(100, "火龙果", "上海"));
	vs.push_back(CGoods(39, "衣服", "北京"));
	vs.push_back(CGoods(38, "海鲜", "大连"));
	vs.push_back(CGoods(33, "糖果", "上海"));

	for (size_t i = 0; i < vs.size(); ++i) {
		cout << vs[i].name_ << " : " << vs[i].price_ << endl;
	}
	return 0;
}
