// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>

/*
  试着写一个程序， 可以接受一个文件名作为输入， 打印出文件内容的第一行。
 */



using namespace std;
int main(int argc, char * argv[])
{
	if (argc <= 1) {
		cout << "请输入一个文件名作参数" << endl;
		return 0;
	}
	ifstream ifile(argv[1]);

	char buf[1024] = { 0 };

	ifile.getline(buf, sizeof(buf) / sizeof(buf[0]));
	cout << buf << endl;

	ifile.close();
	return 0;
}



