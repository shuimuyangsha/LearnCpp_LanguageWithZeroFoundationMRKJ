#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

/*
  某人在商城的买东西，结果账时，所有选购商品存储在一个容器中，计算该顾客总共需要付多少钱。
*/

using namespace std;

void main()
{
	vector<float> floatVect;
	floatVect.push_back(12.04f);
	floatVect.push_back(4.29f);
	floatVect.push_back(33.9f);
	floatVect.push_back(4.34f);
	floatVect.push_back(25.9f);
	floatVect.push_back(428.0f);

	cout << "共消费:";
	cout << accumulate(floatVect.begin(), floatVect.end(), 0.0f);
	cout << "元";
	cout << endl;
}
