// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ��������ѧ�ķ������ڲ���� - ʳ��Ŀ - Ȯ�ƣ���������ṹ��������������ռ䡣
*/


namespace mammalia {
	namespace carnivora {
		namespace canidae {
			// ����
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
	strcpy(adog.name, "����");

	cout << adog.name << endl;
	return 0;
}
