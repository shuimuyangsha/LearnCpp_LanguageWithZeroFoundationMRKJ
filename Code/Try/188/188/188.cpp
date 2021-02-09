// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <set>

/*
  在一个vector中，侟储了某公司所有员工的学历信息，使用count函数，统计
  出毕业于北华大学的员工人数。


*/

using namespace std;
int main(int argc, char* argv[])
{
	multiset<string> ss;

	ss.insert("北华大学");
	ss.insert("北京大学");
	ss.insert("清华大学");
	ss.insert("北华大学");
	ss.insert("北华大学");
	int cnt = count(ss.begin(), ss.end(), "北华大学");
	cout << cnt << endl;
	return 0;
}
