#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

/*
  在vector容器中存储了某公司今年各种产品的销售额，计算该公司从年的总销集额。
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

	cout << "总销售额为:";
	cout << accumulate(intVect.begin(), intVect.end(), 0);
	cout << endl;
}
