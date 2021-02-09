// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <set>

/*
  写一程序，接受用户输入的字符串，存储在set容器中，最后使用迭代器输出用户输入
  的所有字符串。
*/

using namespace std;
int main(int argc, char* argv[])
{
	set<string> ss;

	while (1) {
		string input;
		cout << "输入(byte:退出)：" << endl;
		cin >> input;
		if (input == "byte") {
			break;
		}
		ss.insert(input);
	}

	for (set<string>::iterator it = ss.begin(); it != ss.end(); ++it) {
		cout << *it << endl;
	}
	return 0;
}
