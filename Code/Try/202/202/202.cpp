// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>
#include <string>

/*
 дһ�����򣬸ó����������� 10 ���ļ����ļ���Ϊ 1.txt,2.txt ... 10.txt��
*/

using namespace std;
int main(int argc, char* argv[])
{
	for (int i = 1; i <= 10; ++i) {
		char input[100] = { 0 };
		sprintf(input, "%d", i);
		ofstream ofile;
		ofile.open(input);
		if (!ofile.fail()) {
			cout << "�����ɹ�." << endl;
			ofile.close();
		}
		else {
			cout << "����ʧ��!" << endl;
		}
	}
	return 0;
}
