// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>

/*
  �Զ���һ������sex���ø�����ӵ����string����ͬ��Ч�������ڱ����Ա�
*/

using namespace std;
int main(int argc, char* argv[])
{
	typedef string t_sex;
	string a_sex = "male";
	t_sex another_sex = a_sex;


	cout << a_sex << "," << another_sex << endl;
	return 0;
}
