// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ����ָ���ж��ַ�����I have a dream.�����ж��ٸ�����
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
		// ������ͷ�Ŀո�����еĻ�
		while (issplit(*p)) p++;
		if (!*p) {
			break;
		}
		// ��¼��һ������
		if (*p != ' ' && *p != '.') {
			count++;
		}

		// ���������ַ�
		while (*p && !issplit(*p)) {
			p++;
		}
	}

	cout << "��������:" << count << endl;

	return 0;
}
