#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

/*
  某"vector<CStudent>"中存储了三年二班学生的信息，使用输出迭代
  器输出所有的学生信息，每行一个。
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
	vs.push_back(CStudent(12, "学生一"));
	vs.push_back(CStudent(4, "王小飞"));
	vs.push_back(CStudent(33, "赵亦欢"));
	vs.push_back(CStudent(4, "郭驱达"));
	vs.push_back(CStudent(25, "王小科"));
	vs.push_back(CStudent(428, "谭咏慧"));
	vector<CStudent>::iterator it = vs.begin();
	while (it != vs.end()) {
		cout << it->name_ << ":" << it->age_ << endl;
		++it;
	}
	cout << endl;
}
