// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>

/*
  ����дһ������ ���Խ���һ���ļ�����Ϊ���룬 ��ӡ���ļ���ȫ�����ݡ�
 */



using namespace std;
int main(int argc, char * argv[])
{
	char name[20];
	cout << "�������ļ���" << "\n";
	cin >> name;           //�����ļ��� 
	ifstream ifile(name);
	if (!ifile.fail())
	{
		while (!ifile.eof())                //�ж��ļ��Ƿ����
		{
			char ch;
			ifile.get(ch);//��ȡ�ַ�
			if (!ifile.eof())
			{
				cout << ch;
			}
		}
		ifile.close();
	}
	return 0;
}



