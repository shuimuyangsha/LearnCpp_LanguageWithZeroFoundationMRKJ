// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  дһ����������û������Ŀ¼���ļ�����Ȼ������ļ���ȫ·����
*/

using namespace std;
int main(int argc, char* argv[])
{

	char path[1024];
	char filename[256];
	cout << "������Ŀ¼:" << endl;
	cin >> path;
	cout << "�������ļ���:" << endl;
	cin >> filename;

	strcat(path, filename);

	cout << path << endl;
	return 0;
}
