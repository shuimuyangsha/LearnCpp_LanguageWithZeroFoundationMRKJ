// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  дһ������eat()���ú�������һ��ʳ��ṹ�����������Ե�ʳ����ʲô��
*/

using namespace std;

struct Food {
	char food_1[64];
	char food_2[64];
};
void eat(Food food) {
	cout << food.food_1 << ", " << food.food_2 << endl;
}


int main(int argc, char* argv[])
{
	Food food = { "����", "ţ��" };
	eat(food);
	return 0;
}
