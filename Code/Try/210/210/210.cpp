// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>

/*
  ����дһ�����򣬶�ȡ�����ļ������ݣ���16���Ƹ�ʽ������������Ӧ��ascii�롣
*/


using namespace std;
int main()
{
	unsigned char buf;
	fstream file;
	file.open("test.dat", ios::binary | ios::in);
	while (!file.eof()) {
		buf = '\0';
		file.read((char*)&buf, sizeof(buf));
		if (file.tellg() > 0)
			printf("%02X(", buf);
		if (buf >= 'A' && buf <= 'Z') 
		{
			printf("%c", buf);
		}
		else if (buf >= 'a' && buf <= 'z')
		{
			printf("%c", buf);
		}
		else 
		{
			printf(" ");
		}
		printf(")");
	}
	cout << endl;
	file.close();
	return 0;
}
