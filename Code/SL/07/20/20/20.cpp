#include <iostream>
using namespace std;
void swap(int & a, int & b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
void main()
{
	int x, y;
	cout << "������x" << endl;
	cin >> x;
	cout << "������y" << endl;
	cin >> y;
	cout << "ͨ�����ý���x��y" << endl;
	swap(x, y);
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
}
