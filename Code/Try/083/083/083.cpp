// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ����ĳ��ϵͳ�����Լ�¼ʫ����������£�ʫ��������룬���������ʱ��Ҫ��ÿ����
  ����ƪ���¡�������ƪ���¹��ĸ����ӣ�ÿ�����ӳ���Ϊ30����дһ������ģ��˳�
  ����
*/

using namespace std;
int main(int argc, char* argv[])
{
	char buf[4][30 + 1] = { 0 };     // +1��Ϊ�˸���β'\0'����λ��
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < (30 + 1); j++) {
			buf[i][j] = '\0';
		}
	}
	cout << "������ʫ�䣬ÿ���Կո�(����)�ָ�������������4�䣬ÿ�����30���ַ�:\n";
	int count = 0;
	while (count < 4) {
		cin >> buf[count];
		count++;
	}

	char total_buf[4 * 31] = { 0 };
	for (int line = 0; line < 4; line++) {
		strcat(total_buf, buf[line]);
	}
	cout << "�������ʫ��Ϊ:\n";
	cout << total_buf << endl;

	return 0;
}
