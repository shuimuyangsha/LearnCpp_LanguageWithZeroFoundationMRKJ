// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ĳ��˾�½�4*4���칫��λ����ֻ�õ�1�ŵ�3���͵�3�ŵ�2����λ��ʹ�ã��ڿ�
  ��̨�����δʹ�õ��¿�λ��
*/

using namespace std;
int main(int argc, char* argv[])
{
	for (int i = 1; i <= 4; ++i) {
		for (int j = 1; j <= 4; ++j) {
			if (i == 1 && j == 3) {
				continue;
			}
			if (i == 3 && j == 2) {
				continue;
			}

			cout << "��" << i << "�ŵ�" << j << "����λδʹ��" << endl;
		}
	}
	return 0;
}

