// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义交通工具类，有船和汽车两个子类，定义水陆两栖汽车类，继承了船类和汽车类；验
  证水陆两栖汽车类是否存在两个交通工具类的副本，如果存在，通过虚继承改正这个问题。
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

// 这样继承，会有两个成员变量
class  CBoatCar : public CBoat, public CCar {
};

int main(int argc, char* argv[])
{

  CBoatCar bc;
  bc.CBoat::speed = 100;
  bc.CCar::speed = 200;
  // 下面这句无法通过编译，因为该子类有两个“speed”变量，编译器不知道
  //   这里的speed是哪一个
  // cout << bc.speed << endl;



  //  解决外问题的方法是使用下面的 "// 正确的代码" 所示的代码

  return 0;
}
*/
// 正确的代码
class CVehice {
public:
	int speed;
};
class CBoat : virtual public CVehice {
};

class CCar : virtual public CVehice {
};

// 这样继承，会有两个成员变量
class  CBoatCar : public CBoat, public CCar {
};

int main(int argc, char* argv[])
{

	CBoatCar bc;
	bc.CBoat::speed = 100;
	bc.CCar::speed = 200;

	// 输出的是同一个变量，值都是200
	cout << bc.speed << endl;
	cout << bc.CBoat::speed << endl;
	cout << bc.CCar::speed << endl;
	return 0;
}




