// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���������ա�mingrisoft���͡�microsoft��,�����������ռ��У�
  ����ͬһ��������name��������Ϊ��ͬ��ֵ��Ȼ�����������������ֵ����
*/

namespace mingrisoft {
	const char * name = "mingrisoft";
}


using namespace std;
int main(int argc, char* argv[])
{
	using namespace mingrisoft;
	cout << name << endl;
	return 0;
}
