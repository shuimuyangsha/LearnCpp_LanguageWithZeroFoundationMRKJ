// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���塰���ƶ��ࡱ�͡��ɳ����ࡱ�� ���塰���顱�࣬�̳�ǰ�����ࣻ ��main��
  ���ж��塰���顱�����͵ı������鿴����Ĺ��캯���ĵ���˳��
*/

using namespace std;

class CMoveable
{
public:
	CMoveable() {
		cout << "CMoveable()" << endl;
	}
	~CMoveable() {
		cout << "~CMoveable()" << "\n";
	}
};

class CSingable
{
public:
	CSingable() {
		cout << "CSingable()" << endl;
	}
	~CSingable() {
		cout << "~CSingable()" << "\n";
	}
};

// �н�ʦ��
class CSpirit : public CMoveable, public CSingable {

};

int main(int argc, char* argv[])
{
	CSpirit mt;
	return 0;
}
