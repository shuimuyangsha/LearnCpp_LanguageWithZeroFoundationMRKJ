// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���һ��������ͷƿ�Ĺ����壬�����ͷƿ����װ���ң�����װҬ�ӣ�Ҳ����װɽ髣���
  һ��ֻ��װһ��ˮ����
*/

using namespace std;
int main(int argc, char* argv[])
{

	// ��
	struct peaches {
		char name[64];
	};

	// Ҭ��
	struct coconut {
		char name[64];
	};

	// ɽ�
	struct hawthorn {
		char name[64];
	};


	// ��ͷ
	union tin {
		peaches p;
		coconut c;
		hawthorn h;
	};

	tin t;
	strcpy(t.p.name, "��");
	strcpy(t.c.name, "Ҭ��");
	strcpy(t.h.name, "ɽ�");


	cout << t.p.name << endl;
	return 0;
}
