// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ����һ���ַ����飬����ѧ�����ĳɼ�����ѧ�ɼ���Ӣ��ɼ����ܳɼ�����������ڿ�
  ��̨�����
 */

using namespace std;
int main(int argc, char* argv[])
{
	char score[] = { 95, 76, 81, 'C' };
	cout << "���ĳɼ�:" << (int)score[0] << endl;
	cout << "��ѧ�ɼ�:" << (int)score[1] << endl;
	cout << "Ӣ��ɼ�:" << (int)score[2] << endl;
	cout << "�ܳɼ�����:" << score[3] << endl;
	return 0;
}


