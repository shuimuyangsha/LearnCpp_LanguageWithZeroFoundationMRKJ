// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���塰�ˡ��࣬����һ����Ա������SayHello()���������Hello������
  ���ࡱ������һ������ʦ�ࡱ��Ҳ��һ��������SayHello�������������Hel-
  -lo�����ǽ�ʦ���� ��main�����ж��ġ��ˡ���͡���ʦ����ı��������ֱ��
  �á�SayHello�������������۲���������
*/

using namespace std;
class CPerson
{
public:
	void SayHello() {
		cout << "��������" << endl;
	}
};

class CTeacher : public CPerson
{
public:
	void SayHello() {
		cout << "���������ʦ" << endl;
	}
};




int main(int argc, char* argv[])
{
	CPerson person;
	CTeacher teacher;

	person.SayHello();
	teacher.SayHello();
	return 0;
}
