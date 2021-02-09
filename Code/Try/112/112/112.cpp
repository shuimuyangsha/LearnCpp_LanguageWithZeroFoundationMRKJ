// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  编写一个函数，判断“只有知道如何停止的人才知道如何加快速度。”中“加快”出现的位置，返回子字符串的指针。
*/

const char * FindStr(const char * str, const char * substr) {
	const char * p = str;
	bool bFind = false;
	while (*p && strlen(p) >= strlen(substr)) {
		// 逐个字符比较是否相等
		int i;
		for (i = 0; i < strlen(substr); ++i) {
			if (p[i] != substr[i]) {
				break;
			}
		}
		if (i == strlen(substr)) {
			bFind = true;
			break;
		}
		p++;
	}
	if (bFind) {
		return p;
	}
}

using namespace std;
int main(int argc, char* argv[])
{
	const char * pos = FindStr("只有知道如何停止的人才知道如何加快速度。", "加快");
	cout << pos << endl;
	return 0;
}
