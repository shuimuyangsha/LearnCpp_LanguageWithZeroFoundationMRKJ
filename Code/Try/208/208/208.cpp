// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>

/*
  ����дһ�����򣬸ó�����Դ�ӡ����a.csv���ļ������ݣ����ļ�����Ϊ:
  ����,����,���
  ����ë,22, 178
  С��,18, 176
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



