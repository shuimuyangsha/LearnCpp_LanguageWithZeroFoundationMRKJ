// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  完善以下代码之后运行程序，并解释运行结果:
  void Zoomin(float val) {
  val = val * 100;
  }

  int main(int argc, char* argv[])
  {
  float val = 1.2;
  cout << "放大前:" << val << endl;
  Zoomin(val);
  cout << "放大后:" << val << endl;
  return 0;
  }


*/

using namespace std;

void Zoomin(float val) {
	val = val * 100;
}

int main(int argc, char* argv[])
{
	float val = 1.2;
	cout << "放大前:" << val << endl;
	Zoomin(val);
	cout << "放大后:" << val << endl;
	cout << endl;

	cout <<
		"对运行结果的解释：\n"
		"由于函数 Zoomin使用的值传递，因此，在这个函数中改变了val的值，并没\n"
		"有影响到main函数中的变量 val,即不能起到放大变量的作用。\n"
		"因此，调用该函数前后，main函数中val的值，并没有变化。\n";
	return 0;
}
/*
  对运行结果的解释：
  由于函数 Zoomin使用的值传递，因此，在这个函数中改变了val的值，并没
  有影响到main函数中的变量 val,即不能起到放大变量的作用。
  因此，调用该函数前后，main函数中val的值，并没有变化
 */


