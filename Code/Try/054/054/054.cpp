// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ĳ��Ժ�����ݳ���Ʊ���ݲ�������ϯ��4�У�ÿ����10����λ��Ϊ�˲�Ӱ������ӽǣ�
  �ڷ�����Ʊʱ�����ε�����һ�к�����һ�е���λ��
*/

using namespace std;
int main(int argc, char* argv[])
{
	for (int i = 1; i <= 4; ++i) {
		for (int j = 1; j <= 10; ++j) {
			if (j == 1 || j == 10) {
				continue;
			}
			cout << "������λ: " << i << "," << j << endl;
		}
	}
	return 0;
}

