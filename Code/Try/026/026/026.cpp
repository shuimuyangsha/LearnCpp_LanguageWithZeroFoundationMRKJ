// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  一位职工早上上班打卡，她的工位号是13，密码是111，输入正确门禁卡会出现
  "谢谢，已签到"的字样，请在控制台模拟此场景。
*/
using namespace std;
int main(int argc, char* argv[])
{

	int card, pass;
	cout << "请输入工号:" << endl;
	cin >> card;
	cout << "请输入密码:" << endl;
	cin >> pass;

	if (card == 13 && pass == 111) {
		cout << "谢谢，已签到" << endl;
	}
	else {
		cout << "工号或密码错误!" << endl;
	}
	return 0;
}

