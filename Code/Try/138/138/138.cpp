// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ����ʮ����Ф��ö�٣��ж�����������Ф˭����ǰ��˭���ں�
*/

using namespace std;
int main(int argc, char* argv[])
{
	/*
	  |-----------+---------|
	  | ��        | rat     |
	  | ţ        | ox      |
	  | ��        | tiger   |
	  | ��        | hare    |
	  | ��        | dragon  |
	  | ��        | snake   |
	  | ��        | horse   |
	  | ��        | sheep   |
	  | ��        | monkey  |
	  | ��        | rooster |
	  | ��        | dog     |
	  | ��        | boar    |
	  |-----------+---------|
	*/

	enum {
		rat, ox, tiger, hare, dragon, snake, horse, sheep,
		monkey, roster, dog, boar
	};

	if (rat < ox) {
		cout << "����ţǰ" << endl;
	}
	else {
		cout << "����ţ��" << endl;
	}

	return 0;
}
