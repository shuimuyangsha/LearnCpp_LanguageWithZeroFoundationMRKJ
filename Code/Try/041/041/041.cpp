// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  公司有饮料区和食品区，饮料区有牛奶、咖啡、果汁，食品区有面包、饼干，用户可以
  点击按钮选择商品，利用if嵌套输出用户的订单。（用户有输入功能）
*/

using namespace std;
int main(int argc, char* argv[])
{
	int input_a;
	cout << "请输入(1:饮料, 2:食品)" << endl;
	cin >> input_a;
	if (input_a == 1) {
		int input_b;
		cout << "请输入(1:牛奶,2:咖啡,3:果汁)" << endl;
		cin >> input_b;
		if (input_b == 1) {
			cout << "您选择了牛奶" << endl;
		}
		else if (input_b == 2) {
			cout << "您选择了咖啡" << endl;
		}
		else {
			cout << "您选择了果汁" << endl;
		}
	}
	else {
		int input_b;
		cout << "请输入(1:面包,2:饼干)" << endl;
		cin >> input_b;
		if (input_b == 1) {
			cout << "您选择了面包" << endl;
		}
		else {
			cout << "您选择了饼干" << endl;
		}
	}
	return 0;
}

