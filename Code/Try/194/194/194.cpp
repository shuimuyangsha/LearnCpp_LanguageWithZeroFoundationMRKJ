#include <iostream>
#include <vector>
#include <algorithm>

/*
  ��ĳѧ�����������Գɼ���������
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
	sort(intVect.begin(), intVect.end());
	for (size_t i = 0; i < intVect.size(); ++i) {
		cout << intVect[i] << " ";
	}
	cout << endl;
}
