#include <iostream>
#include <fstream>

/*
  дһ�������Զ���ĸ�ʽ���һ��CSV�ļ����ļ������Զ��ŷָ���
 */

using namespace std;
int main(int argc, char * argv[])
{
	ifstream ifile("a.csv");

	char buf[1024] = { 0 };

	while (!ifile.eof())//�ж��ļ��Ƿ����
	{
		ifile.getline(buf, sizeof(buf) / sizeof(buf[0]));
		cout << buf;
		cout << "��" << endl;
	}
	ifile.close();
	return 0;
}