// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  有一个数组中存储了若干个英文单词，请写一个函数，找到指定的单词在数组中的信置。
 */

using namespace std;

int FindWord(const char * array[], int len, const char * word) {
	for (int i = 0; i < len; ++i) {
		if (0 == strcmp(array[i], word)) {
			return i;
		}
	}
	return -1;
}


int main(int argc, char* argv[])
{
	const char * dict[] = {
	  "ming",
	  "mingri",
	  "soft",
	  "book"
	};
	char word[64];
	cin >> word;
	int index = FindWord(dict, 4, word);
	if (index < 0) {
		cout << "查无此词：" << word << endl;
	}
	else {
		cout << "单词位置：" << index << endl;
	}
	return 0;
}
