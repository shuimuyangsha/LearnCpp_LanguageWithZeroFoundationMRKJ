#include <iostream>
#include <vector>
#include <algorithm>

/*
  一个容器中存储了某班级所有学生的成绩，使用Partition算法将容器分组，一
  组为及格的学生，一组为不及格的学生。
 */

using namespace std;

void Output(int val)
{
	cout << val << ' ';
}
bool gr60(int val)
{
	return val >= 60;
}
void main()
{
	vector<int > intVect;
	intVect.push_back(70);
	intVect.push_back(39);
	intVect.push_back(59);
	intVect.push_back(65);
	intVect.push_back(100);
	partition(intVect.begin(), intVect.end(), gr60);
	cout << "学生成绩为:";
	for_each(intVect.begin(), intVect.end(), Output);
	cout << endl;
}
