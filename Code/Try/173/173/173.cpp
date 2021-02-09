// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���������࣬����������һ�����������������������������Ь������������������������
  Ь����������Ь��
*/

using namespace std;

class IFactory {
public:
	virtual void Create() const = 0;
};

class CCarFactory : public IFactory {
public:
	void Create() const {
		cout << "����������" << endl;
	}
};

class CShoeFactory : public IFactory {
public:
	void Create() const {
		cout << "����Ь�ӣ�" << endl;
	}
};


int main(int argc, char* argv[])
{
	IFactory *p1 = new CCarFactory;
	IFactory *p2 = new CShoeFactory;

	p1->Create();
	p2->Create();

	return 0;
}
