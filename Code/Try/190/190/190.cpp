// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>     // std::cout
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <string>        // std::string

/*
  某高中一年级分班，使用随机的方法进行分配，请使用random_shuffle算
  法，将数组中所有学生的名字打乱，并输出。
*/

using namespace std;
int main(int argc, char* argv[])
{
	vector<string> students;
	srand(unsigned(time(0)));

	students.push_back("李小科");
	students.push_back("张小左");
	students.push_back("二牛");
	students.push_back("王三立");
	students.push_back("李德亮");

	random_shuffle(students.begin(), students.end());


	cout << students[0] << endl;
	cout << students[1] << endl;
	cout << students[2] << endl;

	return 0;
}
