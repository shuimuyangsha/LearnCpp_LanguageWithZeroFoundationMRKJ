// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream ifile("config.txt");

	char buf[128] = { 0 };

	ifile.getline(buf, 128);
	cout << buf << endl;

	ifile.getline(buf, 128);
	cout << buf << endl;

	ifile.close();
	return 0;
}



