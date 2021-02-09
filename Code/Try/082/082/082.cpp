// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  创建一个字符数组，保存学生语文成绩、数学成绩、英语成绩和总成绩评级，最后在控
  制台输出。
 */

using namespace std;
int main(int argc, char* argv[])
{
	char score[] = { 95, 76, 81, 'C' };
	cout << "语文成绩:" << (int)score[0] << endl;
	cout << "数学成绩:" << (int)score[1] << endl;
	cout << "英语成绩:" << (int)score[2] << endl;
	cout << "总成绩评级:" << score[3] << endl;
	return 0;
}


