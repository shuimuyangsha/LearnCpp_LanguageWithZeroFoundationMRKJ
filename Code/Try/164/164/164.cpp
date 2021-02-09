// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义火车类，类中有一个变量count记录火车有多少节车厢，重载“>”运算符，实
  现判断两列火车中哪一列火车的载客数量更多。
*/

class CTrain
{
public:
	CTrain(int cnt) : count(cnt) {

	}
	bool operator> (const CTrain& other) {
		return this->count > other.count;
	}
	int count;
};




using namespace std;
int main(int argc, char* argv[])
{
	CTrain train1(30);
	CTrain train2(28);
	if (train1 > train2) {
		cout << "火车1 > 火车2" << endl;
	}
	else {
		cout << "火车1 <= 火车2" << endl;
	}
	return 0;
}
