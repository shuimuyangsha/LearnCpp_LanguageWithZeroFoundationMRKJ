// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  假设某个系统，可以记录诗人输入的文章，诗人逐句输入，而程序输出时，要求每次输
  出整篇文章。假设整篇文章共四个句子，每个句子长度为30，试写一个程序模拟此场
  景。
*/

using namespace std;
int main(int argc, char* argv[])
{
	char buf[4][30 + 1] = { 0 };     // +1是为了给结尾'\0'留出位置
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < (30 + 1); j++) {
			buf[i][j] = '\0';
		}
	}
	cout << "请输人诗句，每句以空格(或换行)分隔，共可以输入4句，每句最多30个字符:\n";
	int count = 0;
	while (count < 4) {
		cin >> buf[count];
		count++;
	}

	char total_buf[4 * 31] = { 0 };
	for (int line = 0; line < 4; line++) {
		strcat(total_buf, buf[line]);
	}
	cout << "您输入的诗句为:\n";
	cout << total_buf << endl;

	return 0;
}
