#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

/*
  ��vector�����д洢��ĳ��˾������ֲ�Ʒ�����۶����ù�˾������������
*/

using namespace std;

void main()
{
	vector<int> intVect;
	intVect.push_back(470);
	intVect.push_back(429);
	intVect.push_back(339);
	intVect.push_back(434);
	intVect.push_back(259);
	intVect.push_back(428);

	cout << "�����۶�Ϊ:";
	cout << accumulate(intVect.begin(), intVect.end(), 0);
	cout << endl;
}
