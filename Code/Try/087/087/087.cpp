
// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  写一个程序，接受用户的输入，每当用户输入一个单词，则输出这个单词；当用户输入
  “exit”，程序应输出“bye”，并退出。
*/

using namespace std;
int main(int argc, char* argv[])
{
	while (1) {
		char input[1024];
		cin >> input;
		if (0 == strcmp(input, "exit")) {
			cout << "bye" << endl;
			return 0;
		}
		else {
			cout << input << endl;
		}
	}
	return 0;
}
