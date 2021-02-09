// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>

/*
  写一个程序，接受用户输入的两个数字，求和之后将这一过程写入“result.txt”文件中，
  如用户输入“1 2”，则文件的内容应该为“1 + 2 = 3”
*/


using namespace std;
int main()
{
	ofstream ofile("result.txt");
	int buf;
	int buf2;
	cout << "请输入加数1:" << endl;
	cin >> buf;
	cout << "请输入加数2:" << endl;
	cin >> buf2;
	ofile << buf << " + " << buf2 << " = " << buf + buf2 << "\n";
	ofile.close();
	return 0;
}


