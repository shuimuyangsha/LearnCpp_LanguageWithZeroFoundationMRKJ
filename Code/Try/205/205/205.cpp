// Try.cpp : Defines the entry point for the console application.
//


// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>

/*
  дһ�����򣬽����û����룬���������д�롰log.txt���ļ��С�
*/



using namespace std;
int main()
{
	ofstream ofile("log.txt");
	while (1) {
		char buf[128] = { 0 };
		cout << "������('quit'�˳�����):" << endl;
		cin >> buf;
		if (0 == strcmp(buf, "quit")) { break; }
		ofile << buf << "\n";
	}

	ofile.close();
	return 0;
}


