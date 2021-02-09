// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <set>

/*
  在集合中存储一些学生姓名，然后根据学生姓名，查找该学生
*/


using namespace std;
int main(int argc, char* argv[])
{
	set<string> cSet;    //利用set对象创建字符类型的集合
	string strInput;

	cSet.insert("王二小");        //插入元素
	cSet.insert("雷锋");
	cSet.insert("郑明日");
	cSet.insert("李光祖");

	cout << "输入要查找的学生姓名:" << endl;
	cin >> strInput;

	set<string>::iterator it = cSet.find(strInput);        //在集合中查找指定的元素
	cout << "start find:" << strInput << endl;
	if (it == cSet.end())    //没找到元素
		cout << "not found" << endl;
	else        //找到元素
		cout << "found" << endl;
	return 0;
}
