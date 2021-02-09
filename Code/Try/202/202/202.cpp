// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>
#include <string>

/*
 写一个程序，该程序连续创建 10 个文件，文件名为 1.txt,2.txt ... 10.txt。
*/

using namespace std;
int main(int argc, char* argv[])
{
	for (int i = 1; i <= 10; ++i) {
		char input[100] = { 0 };
		sprintf(input, "%d", i);
		ofstream ofile;
		ofile.open(input);
		if (!ofile.fail()) {
			cout << "创建成功." << endl;
			ofile.close();
		}
		else {
			cout << "创建失败!" << endl;
		}
	}
	return 0;
}
