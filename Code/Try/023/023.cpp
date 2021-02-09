#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int iInput;
	cout << "请输入数字：" << endl;
	cin >> iInput; //接收用户输入??
	if (iInput % 3 == 0 && iInput % 5 == 0 && iInput % 7 == 0)
		cout << "数字" << iInput << "能被3、5和7同时整除" << endl;
	return 0;
}