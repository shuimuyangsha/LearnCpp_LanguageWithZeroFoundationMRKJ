// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  �������غ������ԣ����庯��concat���ú�������������ͬ��
  �ͣ�int��short��long��char*���Ĳ�����Ȼ���ӡ�����ǵ�������ʽ���磺
  concat(1,2); ��� 12
  concat("I miss", "you") ; ��� I miss you
*/

using namespace std;

void concat(int a, int b) {
	cout << a << b << endl;
}
void concat(const char * a, const char * b) {
	cout << a << b << endl;
}


int main(int argc, char* argv[])
{
	concat(1, 2);
	concat("I miss", " you");
	return 0;
}
