// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream ofile("config.txt");

	char buf[128] = { 0 };
	cout << "�������û���:" << endl;
	cin >> buf;
	ofile << buf << "\n";
	cout << "��������  ��:" << endl;
	cin >> buf;
	ofile << buf << "\n";
	ofile.close();
	return 0;
}



