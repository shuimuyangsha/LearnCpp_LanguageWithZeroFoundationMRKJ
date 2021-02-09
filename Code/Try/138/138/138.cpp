// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义十二生肖的枚举，判断任意两个生肖谁排在前，谁排在后。
*/

using namespace std;
int main(int argc, char* argv[])
{
	/*
	  |-----------+---------|
	  | 鼠        | rat     |
	  | 牛        | ox      |
	  | 虎        | tiger   |
	  | 兔        | hare    |
	  | 龙        | dragon  |
	  | 蛇        | snake   |
	  | 马        | horse   |
	  | 羊        | sheep   |
	  | 猴        | monkey  |
	  | 鸡        | rooster |
	  | 狗        | dog     |
	  | 猪        | boar    |
	  |-----------+---------|
	*/

	enum {
		rat, ox, tiger, hare, dragon, snake, horse, sheep,
		monkey, roster, dog, boar
	};

	if (rat < ox) {
		cout << "鼠在牛前" << endl;
	}
	else {
		cout << "鼠在牛后" << endl;
	}

	return 0;
}
