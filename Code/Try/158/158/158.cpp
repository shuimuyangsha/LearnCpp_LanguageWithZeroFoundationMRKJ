// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���塰�����ࡱ�� �ٶ��塰���ࡱ���̳С������ࡱ�� �ڹ��캯���������д�ӡ�ַ�
  �����鿴���캯�������������ĵ���˳��
*/

using namespace std;

// ������
class CAnimal
{
public:
	CAnimal() {
		cout << "CAnimal()" << endl;
	}
	~CAnimal() {
		cout << "~CAnimal()" << endl;
	}
};


// ����
class CBird : public CAnimal
{
public:
	CBird() {
		cout << "CBird()" << endl;
	}
	~CBird() {
		cout << "~CBird()" << endl;
	}
};


int main(int argc, char* argv[])
{
	CBird bird;
	return 0;
}
