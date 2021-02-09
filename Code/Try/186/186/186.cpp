// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <set>
#include <algorithm>

/*
  某饭店的菜谱中有一些重复的菜名，请使用adjacent_find算法搜索相邻的重复菜名
*/

using namespace std;
int main(int argc, char* argv[])
{
	multiset<string> cSet;
	string strInput;

	cSet.insert("木须柿子");
	cSet.insert("四喜丸子");
	cSet.insert("四喜丸子");
	cSet.insert("苦瓜蛋");
	cSet.insert("豆");

	// 查找
	multiset<string>::iterator it = adjacent_find(cSet.begin(), cSet.end());
	cout << *it << endl;
	return 0;
}
