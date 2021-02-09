// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  一个球从80米高度自由落下，每次落地后反弹的高度为原高度的一半，第6次反弹多少米？
*/

using namespace std;
int main(int argc, char* argv[])
{
	float high = 80;
	for (int i = 1; i <= 6; ++i) {
		high /= 2.0f;
	}
	cout << "第6次反弹" << high << "米" << endl;

	return 0;
}

