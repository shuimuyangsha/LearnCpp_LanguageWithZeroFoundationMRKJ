// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ��һ���༶����ʦ���������10����ѧ�����������60���������һ���ṹ��������
  ���༶
*/



using namespace std;
int main(int argc, char* argv[])
{
	// �༶
	struct Class {

		struct Student {
			char name[64];
		}
		Teacher[10];  // ��ʦ�ṹ�������

		struct Teacher {
			char name[64];
		}
		Student[60];  // ѧ���ṹ�������
	};

	return 0;
}
