// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义“动物”类，再定义“鸟类”和“哺乳类”，以公有方式继承“动物”类。
*/

using namespace std;

class CAnimal
{
public:
	char name[64];
};
class CBird : public CAnimal
{
};
class CMammal : public CAnimal
{
};


int main(int argc, char* argv[])
{
	CAnimal p;
	CMammal s;
	CBird t;

	strcpy(p.name, "动物");
	strcpy(s.name, "哺乳动物");
	strcpy(t.name, "鸟");

	cout << p.name << endl;
	cout << t.name << endl;
	cout << s.name << endl;

	return 0;
}
