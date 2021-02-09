// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  �������࣬������һ������fly()��
  ����ģ�庯��DoFly���ú������Ե��������fly������
  ���ظ�ģ�庯����ʹ����Խ���һ�����ɻ������͵Ĳ����������÷ɻ��ķ���fly��
*/

using namespace std;
class CBird {
public:
	void fly() {
		cout << "CBird::fly()" << endl;
	}
};

class CPlane {
public:
	void fly() {
		cout << "CPlane::fly()" << endl;
	}
};

template< class T>
void DoFly(T& t) {
	t.fly();
}

void DoFly(CPlane& p) {
	p.fly();
}

int main(int argc, char* argv[])
{
	CBird bird;
	CPlane plane;

	DoFly<CBird>(bird);
	cout << endl;
	DoFly(plane);
	return 0;
}
