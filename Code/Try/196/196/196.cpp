#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

/*
  ĳ�����̳ǵ������������ʱ������ѡ����Ʒ�洢��һ�������У�����ù˿��ܹ���Ҫ������Ǯ��
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

	cout << "������:";
	cout << accumulate(floatVect.begin(), floatVect.end(), 0.0f);
	cout << "Ԫ";
	cout << endl;
}
