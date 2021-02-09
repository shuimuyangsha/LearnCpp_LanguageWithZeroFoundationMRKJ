#include <iostream>
#include <fstream>

/*
  写一个程序，以对齐的格式输出一个CSV文件（文件内容以逗号分隔）
 */

using namespace std;
int main(int argc, char * argv[])
{
	ifstream ifile("a.csv");

	char buf[1024] = { 0 };

	while (!ifile.eof())//判断文件是否结束
	{
		ifile.getline(buf, sizeof(buf) / sizeof(buf[0]));
		cout << buf;
		cout << "，" << endl;
	}
	ifile.close();
	return 0;
}