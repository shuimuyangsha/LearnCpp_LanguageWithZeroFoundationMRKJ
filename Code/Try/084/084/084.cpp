// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  写一个程序接受用户输入的目录和文件名，然后输出文件的全路径。
*/

using namespace std;
int main(int argc, char* argv[])
{

	char path[1024];
	char filename[256];
	cout << "请输入目录:" << endl;
	cin >> path;
	cout << "请输入文件名:" << endl;
	cin >> filename;

	strcat(path, filename);

	cout << path << endl;
	return 0;
}
