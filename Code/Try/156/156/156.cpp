// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���塰����࣬�ٶ��塰���ࡱ�͡������ࡱ���Թ��з�ʽ�̳С�����ࡣ
*/

using namespace std;

class CAnimal
{
public:
	char name[64];
};
class CBird : public CAnimal
{
};
class CMammal : public CAnimal
{
};


int main(int argc, char* argv[])
{
	CAnimal p;
	CMammal s;
	CBird t;

	strcpy(p.name, "����");
	strcpy(s.name, "���鶯��");
	strcpy(t.name, "��");

	cout << p.name << endl;
	cout << t.name << endl;
	cout << s.name << endl;

	return 0;
}
