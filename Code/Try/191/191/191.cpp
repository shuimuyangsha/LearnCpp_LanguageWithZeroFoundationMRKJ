#include <iostream>
#include <vector>
#include <algorithm>

/*
  һ�������д洢��ĳ�༶����ѧ���ĳɼ���ʹ��Partition�㷨���������飬һ
  ��Ϊ�����ѧ����һ��Ϊ�������ѧ����
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
	cout << "ѧ���ɼ�Ϊ:";
	for_each(intVect.begin(), intVect.end(), Output);
	cout << endl;
}
