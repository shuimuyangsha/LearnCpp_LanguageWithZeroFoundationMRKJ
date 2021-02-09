// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义“动物”类；定义“鸟类”类和“哺乳”类，它们继承“动物”类；定义“鸭嘴兽”类，继承前两个类，验证“鸭”嘴兽类是否存在两个“动物”类的副本，如果存在，通过虚继承改正这个问题。
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
