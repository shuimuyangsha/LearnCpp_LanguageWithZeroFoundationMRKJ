// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���塰����࣬���Ĺ��캯����������������ʾ����Ĵ�С���ƶ��ٶȣ��ٶ��塰���ࡱ��
  �̳С�����࣬����Ĺ��캯������ʾ���á������Ĺ��캯����
*/

using namespace std;

class CAnimal
{
public:
	CAnimal(int hght, int spd) {
		height = hght;
		speed = spd;
	}

	int height;
	int speed;
};

class CBird : public CAnimal
{
public:
	CBird(int hght, int spd)
		: CAnimal(hght, spd)
	{
	}
};

int main(int argc, char* argv[])
{
	CBird bird(10, 200);
	cout << bird.height << endl;
	cout << bird.speed << endl;
	return 0;
}
