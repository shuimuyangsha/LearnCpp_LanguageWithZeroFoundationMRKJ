// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ����һ���༶�ṹ�壬����һ����Ա�������ǡ�ѧ�����ṹ�����飬��������༶������
  ѧ������д���룬�������ѧ����������
*/

using namespace std;
int main(int argc, char* argv[])
{

	struct {
		struct {
			char name[64];
		}students[10]; // ѧ��
		int count;// ѧ������
	} mclass;
	int index = 0;
	strcpy(mclass.students[index].name, "С��");
	index++;
	strcpy(mclass.students[index].name, "С��");
	index++;

	for (int i = 0; i < index; ++i) {
		cout << mclass.students[i].name << endl;
	}


	return 0;
}
