// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ����һ������ṹ�壬����һ����Ա�����ǡ���˿���ṹ�����飬������̨�����е�����
  ��˿����д���룬���������˿�ĳ��ȡ�
*/

using namespace std;
int main(int argc, char* argv[])
{
	struct Fridge {
		struct {
			int length;
		}screwdriver[3]; // ������������˿
		int screwdriver_count; // Ŀǰ��˿������
	} fridge;
	Fridge * p = &fridge;
	p->screwdriver[0].length = 10;
	p->screwdriver[1].length = 8;
	p->screwdriver_count = 2;

	for (int i = 0; i < p->screwdriver_count; i++) {
		cout << p->screwdriver[i].length << endl;
	}

	return 0;
}
