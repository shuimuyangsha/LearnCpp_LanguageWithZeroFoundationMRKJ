#include<iostream>
using namespace std;
void main()
{
	int i = 5, j = 8, k = 12, l = 4, x1, x2;
	x1 = i > j&&k > l;               // 先进行“大于”和“小于”运算，再进行“与”运算
	x2 = !(i > j) && k > l;            // 
	printf("%d,%d\n", x1, x2);
}
