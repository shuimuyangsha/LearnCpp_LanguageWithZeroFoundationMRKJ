
#include <iostream>
#include <vector>
#include <algorithm>

/*
  一个容器中存储了某公司销售人员的业绩，使用Partition算法将容器分组，一组为完成业绩的，
  一组为没有完成显绩的。
*/

using namespace std;

void Output(int val)
{
	cout << val << ' ';
}
bool complete(int val)
{
	return val >= 35;
}
void main()
{
	vector<int> intVect;
	intVect.push_back(70);
	intVect.push_back(29);
	intVect.push_back(39);
	intVect.push_back(34);
	intVect.push_back(59);
	intVect.push_back(28);
	partition(intVect.begin(), intVect.end(), complete);
	cout << "销售业绩为:";
	for_each(intVect.begin(), intVect.end(), Output);
	cout << endl;
}
