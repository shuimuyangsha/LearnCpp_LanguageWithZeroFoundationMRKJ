#include <iostream>
using namespace std;
void swap(int a, int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;

}
void main()
{
	int x, y;
	cout << "����������" << endl;
	cin >> x;
	cin >> y;

	if (x < y)
		swap(x, y);
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
}
