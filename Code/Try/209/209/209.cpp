// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>

/*
  ����дһ��������16���Ƶĸ�ʽ����������ļ������ݡ�
*/


using namespace std;
int main()
{
	char buf;
	fstream file;
	file.open("test.dat", ios::binary | ios::in);
	while (!file.eof())
	{
		buf = '\0';
		file.read(&buf, sizeof(buf));
		if (file.tellg() > 0)
			printf("%02X", buf);
	}
	cout << endl;
	file.close();
	return 0;
}
