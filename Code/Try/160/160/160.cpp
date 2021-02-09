// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ��������࣬���Ĺ��캯����һ����������ʾCPU�ͺţ�����ƽ������࣬�̳е����࣬
  ƽ�������Ĺ��캯���������������ֱ���CPU�ͺź͵����������ƽ�������Ĺ���
  ��������ʾ���õ�����Ĺ��캯����
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
