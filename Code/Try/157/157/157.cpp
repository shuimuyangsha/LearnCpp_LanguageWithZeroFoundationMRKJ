// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义火车类，再定义火车类的子类高铁类， 在火车和高铁的构造函数和析构函数中打印
  出打符串，确定各个函数的调用顺序。
*/

using namespace std;
// 火车类
class CTrain
{
public:
	CTrain() {
		cout << "CTrain()" << endl;
	}
	~CTrain() {
		cout << "~CTrain()" << endl;
	}
};

// 高铁类
class CHighSpeedTrain : public CTrain
{
public:
	CHighSpeedTrain() {
		cout << "CHighSpeedTrain " << endl;
	}
	~CHighSpeedTrain() {
		cout << "~CHighSpeedTrain " << endl;
	}
};


int main(int argc, char* argv[])
{
	CHighSpeedTrain hstrain;
	return 0;
}
