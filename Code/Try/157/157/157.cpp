// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ������࣬�ٶ���������������࣬ �ڻ𳵺͸����Ĺ��캯�������������д�ӡ
  ���������ȷ�����������ĵ���˳��
*/

using namespace std;
// ����
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

// ������
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
