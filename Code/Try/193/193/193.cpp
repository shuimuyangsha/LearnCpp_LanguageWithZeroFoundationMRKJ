#include <iostream>
#include <vector>
#include <algorithm>

/*
  对某公司的员工考核成绩进行排序。
*/

using namespace std;

void main()
{
	vector<int> intVect;
	intVect.push_back(70);
	intVect.push_back(29);
	intVect.push_back(39);
	intVect.push_back(34);
	intVect.push_back(59);
	intVect.push_back(28);
	sort(intVect.begin(), intVect.end());
	for (size_t i = 0; i < intVect.size(); ++i) {
		cout << intVect[i] << " ";
	}
	cout << endl;
}
