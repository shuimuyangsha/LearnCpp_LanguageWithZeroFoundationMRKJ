// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���塰�ˡ��࣬ �ٶ��塰ѧ������͡���ʦ���࣬�Թ��з�ʽ�������ˡ��ࡣ
*/

class CPerson
{
public:
	char name[64];
};
class CStudent : public CPerson
{
};
class CTeacher : public CPerson
{
};


using namespace std;
int main(int argc, char* argv[])
{
	CPerson p;
	CTeacher t;
	CStudent s;

	strcpy(p.name, "һ������");
	strcpy(t.name, "һ����ʦ");
	strcpy(s.name, "һ��ѧ��");

	cout << p.name << endl;
	cout << t.name << endl;
	cout << s.name << endl;

	return 0;
}
