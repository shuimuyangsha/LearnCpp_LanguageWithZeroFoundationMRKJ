// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>

/*
  ����дһ������ ���Խ���һ���ļ�����Ϊ���룬 ��ӡ���ļ����ݵĵ�һ�С�
 */



using namespace std;
int main(int argc, char * argv[])
{
	if (argc <= 1) {
		cout << "������һ���ļ���������" << endl;
		return 0;
	}
	ifstream ifile(argv[1]);

	char buf[1024] = { 0 };

	ifile.getline(buf, sizeof(buf) / sizeof(buf[0]));
	cout << buf << endl;

	ifile.close();
	return 0;
}



