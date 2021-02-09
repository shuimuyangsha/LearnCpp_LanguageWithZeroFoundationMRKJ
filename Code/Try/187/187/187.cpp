// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <algorithm>
#include <set>

/*
  在一个set中，存储了某大学所有学生的四级考试成绩，使用count函数，计算出
  所有分数420分的学生的人数。
*/

using namespace std;
int main(int argc, char* argv[])
{
	multiset<int> ss;

	ss.insert(420);
	ss.insert(380);
	ss.insert(338);
	ss.insert(249);
	ss.insert(360);
	ss.insert(420);
	int cnt = count(ss.begin(), ss.end(), 420);
	cout << cnt << endl;
	return 0;
}
