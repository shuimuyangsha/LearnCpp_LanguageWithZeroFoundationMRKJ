
#include <iostream>
#include <vector>
#include <algorithm>

/*
  һ�������д洢��ĳ��˾������Ա��ҵ����ʹ��Partition�㷨���������飬һ��Ϊ���ҵ���ģ�
  һ��Ϊû������Լ��ġ�
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
	cout << "����ҵ��Ϊ:";
	for_each(intVect.begin(), intVect.end(), Output);
	cout << endl;
}
