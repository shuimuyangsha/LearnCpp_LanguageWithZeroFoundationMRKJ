// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>

/*
  试着写一个程序，该程序可以打印出“a.csv”文件的内容，该文件内容为:
  姓名,年龄,身高
  王二毛,22, 178
  小科,18, 176
*/


using namespace std;
int main(int argc, char * argv[])
{
	ifstream ifile("a.csv");

	char buf[1024] = { 0 };

	ifile.getline(buf, sizeof(buf) / sizeof(buf[0]));
	cout << buf << endl;

	ifile.getline(buf, sizeof(buf) / sizeof(buf[0]));
	cout << buf << endl;

	ifile.getline(buf, sizeof(buf) / sizeof(buf[0]));
	cout << buf << endl;

	ifile.close();
	return 0;
}



