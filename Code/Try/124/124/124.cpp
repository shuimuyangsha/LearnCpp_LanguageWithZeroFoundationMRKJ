// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  �������һ���ṹ������ʾһ��С�γ����ýṹ�������һ���������Ľṹ�塣
*/

using namespace std;
int main(int argc, char* argv[])
{
	// �����ṹ�壬ͬʱ�������
	struct Car {
		struct _Engine {
			int height;
			int width;
		} engine;  // ������
		int color; // ��ɫ
	} a_car;

	// �����������Ը�ֵ
	a_car.engine.width = 40;
	a_car.engine.height = 60;

	// ���ó��ӵ���ɫ
	a_car.color = 0x123456;



	return 0;
}
