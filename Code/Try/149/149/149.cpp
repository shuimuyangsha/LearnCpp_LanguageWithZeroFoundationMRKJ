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

namespace microsoft {
	const char * name = "microsoft";
}


using namespace std;
int main(int argc, char* argv[])
{
	cout << mingrisoft::name << endl;
	cout << microsoft::name << endl;
	return 0;
}
