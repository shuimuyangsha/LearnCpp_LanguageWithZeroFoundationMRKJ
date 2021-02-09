// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>

/*
  试着写一个程序，读取二进文件的内容，以16进制格式输出，并输出对应的ascii码。
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
