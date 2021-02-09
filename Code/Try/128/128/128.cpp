// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  写一个函数eat()，该函数传入一个食物结构体参数，输出吃的食物是什么。
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
	Food food = { "大米", "牛肉" };
	eat(food);
	return 0;
}
