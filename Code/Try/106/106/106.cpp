// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>


/*
  ������С��������е�һ����������������飬����Java���͡�Java Web�����ڶ����������Ҳ�������飬����C++���͡�Linux C��������̨����Ҫ������������ؼ��֣������ɺ��Դ�Сд����ĸ������������Լ����λ�á�
 */

using namespace std;
int main(int argc, char* argv[])
{
	const char *books[2][2]={
	  "JAVA", "JAVA WEB",
	  "C++",  "LINUX C",
	};
	//{
	  //{"JAVA", "JAVA WEB"},
	 // {"C++",  "LINUX C"},
	//};

	while (1) {
		char input[64];
		cout << "��������������:" << endl;
		cin.getline(input, 64);

		// ת��Ϊ��д
		for (int i = 0; i < strlen(input); ++i) {
			input[i] = toupper(input[i]);
		}
		// ����Ƚ�
		for (int row = 0; row < 2; ++row) {
			for (int col = 0; col < 2; ++col) {
				if (strstr(books[row][col], input)) {
					cout << "�ڵ�" << 1 + row << "�����, ��" << 1 + col << "��" << endl;
					break;
				}
			}
		}
	}
	return 0;
}
