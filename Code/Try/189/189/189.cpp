// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>     // std::cout
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <string>        // std::string

/*
  ��˾������ᣬһ���齱�����У�ʹ������洢������Ա�����������齱���㷨�ǣ���˳
  ��������ң������ǰ����Ա��������
*/

using namespace std;
int main(int argc, char* argv[])
{
	vector<string> employees;
	srand(unsigned(time(0)));

	employees.push_back("С��");
	employees.push_back("С��");
	employees.push_back("��ţ");
	employees.push_back("������");
	employees.push_back("�����");

	random_shuffle(employees.begin(), employees.end());


	cout << employees[0] << endl;
	cout << employees[1] << endl;
	cout << employees[2] << endl;

	return 0;
}
