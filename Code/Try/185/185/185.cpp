// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <set>
#include <algorithm>

/*
  一个学校的学生中，有可能有一些同名的同学，使用multiset容器，存储学生的
  资料，并使用adjacent_find算法搜索相邻的重复名字。
*/


using namespace std;
int main(int argc, char* argv[])
{
	multiset<string> cSet;
	string strInput;

	cSet.insert("王二小");
	cSet.insert("雷锋");
	cSet.insert("郑明日");
	cSet.insert("郑明日");
	cSet.insert("李光祖");

	// 查找
	multiset<string>::iterator it = adjacent_find(cSet.begin(), cSet.end());
	cout << *it << endl;
	return 0;
}
