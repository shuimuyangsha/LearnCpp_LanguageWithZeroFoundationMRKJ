// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���庯��display���ú���������ʾ������ַ�����ֵ�����ǲ��ܸı��ַ�����
  ���ݡ�
*/

using namespace std;

void display(char const * str) {
	cout << str << endl;
	// ����һ�з����������
	//*str = 'a'; /*error C2166: l-value specifies const object*/
}

int main(int argc, char* argv[])
{
	char const *str = "hello, welcome to mingrisoft.";
	display(str);
	return 0;
}
