// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>

/*
  дһ�����򣬽����û�������������֣����֮����һ����д�롰result.txt���ļ��У�
  ���û����롰1 2�������ļ�������Ӧ��Ϊ��1 + 2 = 3��
*/


using namespace std;
int main()
{
	ofstream ofile("result.txt");
	int buf;
	int buf2;
	cout << "���������1:" << endl;
	cin >> buf;
	cout << "���������2:" << endl;
	cin >> buf2;
	ofile << buf << " + " << buf2 << " = " << buf + buf2 << "\n";
	ofile.close();
	return 0;
}


