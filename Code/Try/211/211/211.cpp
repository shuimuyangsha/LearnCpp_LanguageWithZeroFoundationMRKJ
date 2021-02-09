// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>

/*
  试着写一个程序， 可以接受一个文件名作为输入， 打印出文件的全部内容。
 */



using namespace std;
int main(int argc, char * argv[])
{
	char name[20];
	cout << "请输入文件：" << "\n";
	cin >> name;           //输入文件名 
	ifstream ifile(name);
	if (!ifile.fail())
	{
		while (!ifile.eof())                //判断文件是否结束
		{
			char ch;
			ifile.get(ch);//获取字符
			if (!ifile.eof())
			{
				cout << ch;
			}
		}
		ifile.close();
	}
	return 0;
}



