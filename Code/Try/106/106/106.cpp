// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>


/*
  有两个小型书柜，其中第一个书柜依次有两本书，即《Java》和《Java Web》。第二个书柜依次也有两本书，即《C++》和《Linux C》。控制台输入要搜索的书名或关键字（包括可忽略大小写的字母）后，输出书名以及书的位置。
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
		cout << "请输入书名查找:" << endl;
		cin.getline(input, 64);

		// 转换为大写
		for (int i = 0; i < strlen(input); ++i) {
			input[i] = toupper(input[i]);
		}
		// 逐个比较
		for (int row = 0; row < 2; ++row) {
			for (int col = 0; col < 2; ++col) {
				if (strstr(books[row][col], input)) {
					cout << "在第" << 1 + row << "个书柜, 第" << 1 + col << "列" << endl;
					break;
				}
			}
		}
	}
	return 0;
}
