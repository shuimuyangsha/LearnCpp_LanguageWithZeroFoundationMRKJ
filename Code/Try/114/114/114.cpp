// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ��һ�������д洢�����ɸ�Ӣ�ĵ��ʣ���дһ���������ҵ�ָ���ĵ����������е����á�
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
		cout << "���޴˴ʣ�" << word << endl;
	}
	else {
		cout << "����λ�ã�" << index << endl;
	}
	return 0;
}
