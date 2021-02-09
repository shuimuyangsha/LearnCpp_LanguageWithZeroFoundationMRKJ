// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  狗在生物学的分类属于哺乳纲 - 食肉目 - 犬科，按照这个结构给狗类添加命名空间。
*/


namespace mammalia {
	namespace carnivora {
		namespace canidae {
			// 狗类
			class CDog {
			public:
				char name[64];
			};
		}
	}
}


using namespace std;
int main(int argc, char* argv[])
{
	mammalia::carnivora::canidae::CDog adog;
	strcpy(adog.name, "旺财");

	cout << adog.name << endl;
	return 0;
}
