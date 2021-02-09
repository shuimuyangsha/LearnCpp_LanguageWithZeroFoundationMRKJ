// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>

/*
  自定义一个类型sex，让该类型拥有与string型相同的效果，用于保存性别。
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
