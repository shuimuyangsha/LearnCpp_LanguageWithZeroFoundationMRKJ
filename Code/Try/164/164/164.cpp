// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ������࣬������һ������count��¼���ж��ٽڳ��ᣬ���ء�>���������ʵ
  ���ж����л�����һ�л𳵵��ؿ��������ࡣ
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
		cout << "��1 > ��2" << endl;
	}
	else {
		cout << "��1 <= ��2" << endl;
	}
	return 0;
}
