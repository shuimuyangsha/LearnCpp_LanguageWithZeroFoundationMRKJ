// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <set>

/*
  在集合中存储一些单词，然后根据用户的输入，查找该单词
*/


using namespace std;
int main(int argc, char* argv[])
{
	set<string> cSet;    //利用set对象创建字符类型的集合
	string strInput;

	cSet.insert("ming");        //插入元素
	cSet.insert("ri");
	cSet.insert("mingri");
	cSet.insert("com");
	cSet.insert("mr");

	cout << "输入要查找的单词:" << endl;
	cin >> strInput;

	set<string>::iterator it = cSet.find(strInput);        //在集合中查找指定的元素
	cout << "start find:" << strInput << endl;
	if (it == cSet.end())    //没找到元素
		cout << "not found" << endl;
	else        //找到元素
		cout << "found" << endl;
	return 0;
}
