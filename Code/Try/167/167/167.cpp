// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���塰���ˡ���͡���ʦ���࣬���� ���н�ʦ���࣬�̳�ǰ�����ࣻ ��main����
  �ж��塰�н�ʦ�����͵ı������鿴��������Ĺ��캯���ĵ���˳��
*/

using namespace std;

class CMan
{
public:
	CMan() {
		cout << "CMan()" << endl;
	}
	~CMan() {
		cout << "~CMan()" << "\n";
	}
};

class CTeacher
{
public:
	CTeacher() {
		cout << "CTeacher()" << endl;
	}
	~CTeacher() {
		cout << "~CTeacher()" << "\n";
	}
};

// �н�ʦ��
class CMaleTeacher : public CMan, public CTeacher {

};

int main(int argc, char* argv[])
{
	CMaleTeacher mt;
	return 0;
}
