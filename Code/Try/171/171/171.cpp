// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���彻ͨ�����࣬�д��������������࣬����ˮ½���������࣬�̳��˴���������ࣻ��
  ֤ˮ½�����������Ƿ����������ͨ������ĸ�����������ڣ�ͨ����̳и���������⡣
*/

using namespace std;

/*
class CVehice {
public:
  int speed;
};
class CBoat : public CVehice{
};

class CCar: public CVehice{
};

// �����̳У�����������Ա����
class  CBoatCar : public CBoat, public CCar {
};

int main(int argc, char* argv[])
{

  CBoatCar bc;
  bc.CBoat::speed = 100;
  bc.CCar::speed = 200;
  // ��������޷�ͨ�����룬��Ϊ��������������speed����������������֪��
  //   �����speed����һ��
  // cout << bc.speed << endl;



  //  ���������ķ�����ʹ������� "// ��ȷ�Ĵ���" ��ʾ�Ĵ���

  return 0;
}
*/
// ��ȷ�Ĵ���
class CVehice {
public:
	int speed;
};
class CBoat : virtual public CVehice {
};

class CCar : virtual public CVehice {
};

// �����̳У�����������Ա����
class  CBoatCar : public CBoat, public CCar {
};

int main(int argc, char* argv[])
{

	CBoatCar bc;
	bc.CBoat::speed = 100;
	bc.CCar::speed = 200;

	// �������ͬһ��������ֵ����200
	cout << bc.speed << endl;
	cout << bc.CBoat::speed << endl;
	cout << bc.CCar::speed << endl;
	return 0;
}




