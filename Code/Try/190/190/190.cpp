// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>     // std::cout
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <string>        // std::string

/*
  ĳ����һ�꼶�ְ࣬ʹ������ķ������з��䣬��ʹ��random_shuffle��
  ����������������ѧ�������ִ��ң��������
*/

using namespace std;
int main(int argc, char* argv[])
{
	vector<string> students;
	srand(unsigned(time(0)));

	students.push_back("��С��");
	students.push_back("��С��");
	students.push_back("��ţ");
	students.push_back("������");
	students.push_back("�����");

	random_shuffle(students.begin(), students.end());


	cout << students[0] << endl;
	cout << students[1] << endl;
	cout << students[2] << endl;

	return 0;
}
