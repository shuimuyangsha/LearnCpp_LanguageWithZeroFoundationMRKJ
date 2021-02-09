// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
/*
  粽子有甜的有咸的，甜粽子价钱有 5元的和10元的，咸粽子价钱有4元12元的，
  写程序根据输入的价钱和口味判断并打印出能吃到哪种粽子。如输入"9"和"甜"，
  输出"5元的甜粽子"。
*/

using namespace std;
int main(int argc, char* argv[])
{
	int price;
	int taste;

	cout << "请输入价钱:" << endl;
	cin >> price;

	cout << "请输入口味(1:甜,2:咸):" << endl;
	cin >> taste;

	if (taste == 1) {
		if (5 <= price && price < 10) {
			cout << "5元的甜粽子" << endl;
		}
		else if (price >= 10) {
			cout << "10元的甜粽子" << endl;
		}
		else {
			cout << "钱太少，什么也吃不到" << endl;
		}
	}
	else {
		if (4 <= price && price < 12) {
			cout << "4元的咸粽子" << endl;
		}
		else if (price >= 12) {
			cout << "12元的咸粽子" << endl;
		}
		else {
			cout << "钱太少，什么也吃不到" << endl;
		}
	}

	return 0;
}

