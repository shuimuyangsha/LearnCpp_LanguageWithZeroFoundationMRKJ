#include<iostream>
using namespace std;
void main()
{
	int i = 5, j = 8, k = 12, l = 4, x1, x2;
	x1 = i > j&&k > l;               // �Ƚ��С����ڡ��͡�С�ڡ����㣬�ٽ��С��롱����
	x2 = !(i > j) && k > l;            // 
	printf("%d,%d\n", x1, x2);
}
