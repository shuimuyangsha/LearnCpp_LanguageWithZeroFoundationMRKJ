// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义电脑类，它的构造函数有一个参数，表示CPU型号；定义平板电脑类，继承电脑类，
  平板电脑类的构造函数有两个参数，分别是CPU型号和电池容量，在平板电脑类的构造
  函数中显示调用电脑类的构造函数。
*/

using namespace std;

class CComputer
{
public:
	CComputer(int cpu) {
		this->cpu = cpu;
	}

	int cpu;
};

class CPad : public CComputer
{
public:
	CPad(int cpu, int battery)
		: CComputer(cpu)
	{
		this->battery = battery;
	}

	int battery;
};

int main(int argc, char* argv[])
{
	CPad pad(986, 87);


	cout << pad.cpu << endl;
	cout << pad.battery << endl;

	return 0;
}
