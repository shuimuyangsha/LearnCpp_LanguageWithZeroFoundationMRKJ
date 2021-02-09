// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  公司年会抽奖：
  ①“1”代表“一等奖”，奖品是“42寸彩电”；
  ②“2”代表“二等奖”，奖品是“光波炉”；
  ③“3”代表“三等奖”，奖品是“加湿器”；
  ④“4”代表“安慰奖”，奖品是“16G-U盘”。
  根据控制台输入的奖号，输出与该奖号对应的奖品。
*/

using namespace std;

int main(int argc, char* argv[])
{
	int input;
	cout << "请输入中奖等级(整数[1-4]):" << endl;
	cin >> input;
	if (input == 1) {
		cout << "“一等奖”，奖品是“42寸彩电”；" << endl;
	}
	else if (input == 2) {
		cout << "“二等奖”，奖品是“光波炉”；" << endl;
	}
	else if (input == 3) {
		cout << "“三等奖”，奖品是“加湿器”；" << endl;

	}
	else if (input == 4) {
		cout << "“安慰奖”，奖品是“16G-U盘“。" << endl;

	}
	else {
		cout << "抽奖数字不对，只能输入[1-4]" << endl;
	}
	return 0;
}

