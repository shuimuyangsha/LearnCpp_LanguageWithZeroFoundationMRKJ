// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  �����кͳ����ж��г����������������˿��������ܴ󡣽���������Ϊ�����ռ䣬����
  ������ͬ��������
*/

namespace changchun {
	const char * name = "������";
	namespace chaoyang {
		const char * name = "������";
		int count = 1000;
	}
}

namespace beijing {
	const char * name = "������";
	namespace chaoyang {
		const char * name = "������";
		int count = 3000;
	}
}


using namespace std;
int main(int argc, char* argv[])
{
	cout << changchun::name << changchun::chaoyang::name
		<< "���˿�:" << changchun::chaoyang::count << "��" << endl;
	cout << beijing::name << beijing::chaoyang::name
		<< "���˿�:" << beijing::chaoyang::count << "��" << endl;
	return 0;
}
