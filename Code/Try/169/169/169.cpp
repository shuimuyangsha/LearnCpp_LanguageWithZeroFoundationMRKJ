// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���塰�ˡ��࣬����һ����Ա������virutal void SayHello��������
  �ú�����������������ࡱ���ڶ���һ����ѧ���ࡱ��Ҳ��һ����Ա����
  ��SayHello�������� �ú��������������һ��ѧ��������main�����У�
  �������ˡ����ָ�롰p�������ֱ��á��ˡ���͡�ѧ������ı����Ը�ָ����и�ֵ��
  ֮����á�p->SayHello()��,�۲쵱��ֵ�ı�����ͬʱ�������������
*/

using namespace std;

class CPersion
{
public:
	CPersion() {}
	virtual void SayHello() {
		cout << "��������" << endl;
	}
};

class CStudent : public CPersion
{
public:
	CStudent() {}
	virtual void SayHello() {
		cout << "��ʵ������һ��ѧ��" << endl;
	}
};


int main(int argc, char* argv[])
{
	CPersion *p;
	CPersion persion;
	CStudent student;

	p = &persion;
	p->SayHello();

	p = &student;
	p->SayHello();

	return 0;
}
