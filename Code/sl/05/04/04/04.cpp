#include <iostream>
using namespace std;
void main()
{
	int i, n, sum;
	sum = 0;
	cout << "input 10 number" << endl;
	for (i = 1; i <= 10; i++)
	{
		cout << i << ":";
		cin >> n;
		if (n < 0)     //�ж������Ƿ�Ϊ����
			break;
		sum += n;     //��������������ۼ�
	}
	cout << "The Result :" << sum << endl;
}

