// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  �����кͳ����ж��г����������������˿��������ܴ󡣽���������Ϊ�����ռ䣬����
  ������ͬ��������
*/
int count;
namespace changchun {
	namespace chaoyang {
		const char * name = "������";
		int count = 1000;
	}
}

namespace beijing {
	namespace chaoyang {
		const char * name = "������";
		int count = 3000;
	}
}


using namespace std;
int main(int argc, char* argv[])
{
	using namespace beijing::chaoyang;
	cout << beijing::chaoyang::count << endl;
	return 0;
}
