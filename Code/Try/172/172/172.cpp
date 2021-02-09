// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���塰����ࣻ���塰���ࡱ��͡����顱�࣬���Ǽ̳С�����ࣻ���塰Ѽ���ޡ��࣬�̳�ǰ�����࣬��֤��Ѽ���������Ƿ���������������ĸ�����������ڣ�ͨ����̳и���������⡣
*/

class CAnimal {
public:
	int age;
};

class CBird : virtual public  CAnimal {

};

class Mammalia : virtual public  CAnimal {

};
class CPlatypus : public CBird, public Mammalia {

};


using namespace std;


int main(int argc, char* argv[])
{
	CPlatypus bm;

	bm.age = 10;
	bm.CBird::age = 12;
	bm.Mammalia::age = 14;

	cout << bm.age << endl;
	cout << bm.CBird::age << endl;
	cout << bm.Mammalia::age << endl;

	return 0;
}
