// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  дһ�����򣬸ó�������û�����Ŀ��Գɼ��������������У����û����롰-1����
  ֹͣ�������룬����ӡ��ƽ���ɼ���
*/

using namespace std;
int main(int argc, char* argv[])
{
	int score[5];
	int total = 5;
	int count = 0;
	while (total--) {
		int input;
		cin >> input;
		if (input == -1) {
			break;
		}
		else {
			score[count++] = input;
		}
	}

	int sum = 0;
	for (int i = 0; i < count; ++i) {
		sum += score[i];
	}
	cout << "ƽ���ɼ�:" << sum / (float)count << endl;
	return 0;
}
