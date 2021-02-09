// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  英语老师要求同学用how造句，要求句子长度不得少于3，不得多于30，才算写句成
  功，否则输出写句子失败。
*/

using namespace std;
int main(int argc, char* argv[])
{
	char input[1024];
	cin >> input;
	size_t len = strlen(input);
	if (len >= 3 && len <= 30) {
		cout << "选句成功." << endl;
	}
	else {
		cout << "选句失败!" << endl;
	}
	return 0;
}
