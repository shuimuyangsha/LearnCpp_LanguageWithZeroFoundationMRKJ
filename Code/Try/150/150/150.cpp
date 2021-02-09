// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  北京市和长春市都有朝阳区，但两区的人口总数相差很大。将两市设置为命名空间，两个
  命名有同名的区。
*/

namespace changchun {
	const char * name = "长春市";
	namespace chaoyang {
		const char * name = "朝阳区";
		int count = 1000;
	}
}

namespace beijing {
	const char * name = "北京市";
	namespace chaoyang {
		const char * name = "朝阳区";
		int count = 3000;
	}
}


using namespace std;
int main(int argc, char* argv[])
{
	cout << changchun::name << changchun::chaoyang::name
		<< "有人口:" << changchun::chaoyang::count << "万" << endl;
	cout << beijing::name << beijing::chaoyang::name
		<< "有人口:" << beijing::chaoyang::count << "万" << endl;
	return 0;
}
