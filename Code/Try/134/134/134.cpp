// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ��˾Ա���°�˳����������⣬��������������Ҳ�������ɻ������һ����ͨ���ߵĹ���
  �壬��Ա������ѡ��
*/

using namespace std;
int main(int argc, char* argv[])
{

	// ������
	struct bus {
		char name[64];
	};

	// �ɻ�
	struct plane {
		char name[64];
	};

	// ��ͨ����
	union Transportation {
		bus p;
		plane c;
	};

	Transportation t;
	strcpy(t.p.name, "������");
	strcpy(t.c.name, "�ɻ�");

	cout << t.p.name << endl;
	cout << t.c.name << endl;
	return 0;
}
