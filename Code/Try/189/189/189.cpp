// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>     // std::cout
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <string>        // std::string

/*
  公司举行年会，一个抽奖程序中，使用数组存储了所有员工的姓名，抽奖的算法是：将顺
  序随机打乱，并输出前三名员工姓名。
*/

using namespace std;
int main(int argc, char* argv[])
{
	vector<string> employees;
	srand(unsigned(time(0)));

	employees.push_back("小科");
	employees.push_back("小左");
	employees.push_back("二牛");
	employees.push_back("王三立");
	employees.push_back("李德亮");

	random_shuffle(employees.begin(), employees.end());


	cout << employees[0] << endl;
	cout << employees[1] << endl;
	cout << employees[2] << endl;

	return 0;
}
