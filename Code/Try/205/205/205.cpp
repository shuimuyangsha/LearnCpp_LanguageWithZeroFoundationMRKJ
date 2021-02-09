// Try.cpp : Defines the entry point for the console application.
//


// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>

/*
  写一个程序，接受用户输入，将输入的数写入“log.txt”文件中。
*/



using namespace std;
int main()
{
	ofstream ofile("log.txt");
	while (1) {
		char buf[128] = { 0 };
		cout << "请输入('quit'退出输入):" << endl;
		cin >> buf;
		if (0 == strcmp(buf, "quit")) { break; }
		ofile << buf << "\n";
	}

	ofile.close();
	return 0;
}


