// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  �������´���֮�����г��򣬲��������н��:
  void Zoomin(float val) {
  val = val * 100;
  }

  int main(int argc, char* argv[])
  {
  float val = 1.2;
  cout << "�Ŵ�ǰ:" << val << endl;
  Zoomin(val);
  cout << "�Ŵ��:" << val << endl;
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
	cout << "�Ŵ�ǰ:" << val << endl;
	Zoomin(val);
	cout << "�Ŵ��:" << val << endl;
	cout << endl;

	cout <<
		"�����н���Ľ��ͣ�\n"
		"���ں��� Zoominʹ�õ�ֵ���ݣ���ˣ�����������иı���val��ֵ����û\n"
		"��Ӱ�쵽main�����еı��� val,�������𵽷Ŵ���������á�\n"
		"��ˣ����øú���ǰ��main������val��ֵ����û�б仯��\n";
	return 0;
}
/*
  �����н���Ľ��ͣ�
  ���ں��� Zoominʹ�õ�ֵ���ݣ���ˣ�����������иı���val��ֵ����û
  ��Ӱ�쵽main�����еı��� val,�������𵽷Ŵ���������á�
  ��ˣ����øú���ǰ��main������val��ֵ����û�б仯
 */


