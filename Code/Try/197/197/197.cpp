#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

/*
  ʹ����������������һ����vector<int>���е�����Ԫ�ء���
*/

using namespace std;

void main()
{
	vector<int> intVect;
	intVect.push_back(12);
	intVect.push_back(4);
	intVect.push_back(33);
	intVect.push_back(4);
	intVect.push_back(25);
	intVect.push_back(428);
	vector<int>::iterator it = intVect.begin();
	while (it != intVect.end()) {
		cout << *it << endl;
		++it;
	}
	cout << endl;
}
