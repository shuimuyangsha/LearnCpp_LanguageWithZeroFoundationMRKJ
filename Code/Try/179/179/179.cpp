// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <string>

/*
  试着使用vector模板类，存储学生的成绩和姓名信息，并输出
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
	vs.push_back(CStudent(100, "张三"));
	vs.push_back(CStudent(59, "李四"));
	vs.push_back(CStudent(68, "小红"));
	vs.push_back(CStudent(73, "任杰"));

	for (size_t i = 0; i < vs.size(); ++i) {
		cout << vs[i].name_ << " : " << vs[i].score_ << endl;
	}
	return 0;
}
