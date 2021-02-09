// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  利用指针判断字符串“I have a dream.”中有多少个单词
 */

using namespace std;

bool issplit(char c) {
	return c == ' ' || c == '.';
}

int main(int argc, char* argv[])
{
	char buf[1024] = { "I have a dream." };
	char *p = buf;
	int count = 0;

	while (*p) {
		// 跳过开头的空格，如果有的话
		while (issplit(*p)) p++;
		if (!*p) {
			break;
		}
		// 记录第一个单词
		if (*p != ' ' && *p != '.') {
			count++;
		}

		// 跳过后续字符
		while (*p && !issplit(*p)) {
			p++;
		}
	}

	cout << "单词数量:" << count << endl;

	return 0;
}
