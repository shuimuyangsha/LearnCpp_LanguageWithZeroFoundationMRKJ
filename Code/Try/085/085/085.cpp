// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  将字符串“Where there is a will, there is a way.”保存到字符数组中，
  然后将其翻译成中文“有志者事竟成”。
 */

using namespace std;
int main(int argc, char* argv[])
{
	char buf[1024] = { 0 };
	strcpy(buf, "Where there is a will, there is a way.");
	cout << buf << endl << endl;

	strcpy(buf, "有志者事竟成");
	cout << buf << endl;

	return 0;
}

