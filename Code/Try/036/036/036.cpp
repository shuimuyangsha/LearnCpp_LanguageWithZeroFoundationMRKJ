// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ����ʱ�䣬��ʱ��С��20ʱ�������Good day����ʱ��Ϊ12ʱ��
  ���Noon good ,��������Good evening��
*/

using namespace std;
int main(int argc, char* argv[])
{
	int hour;
	cin >> hour;
	(hour < 20 && hour != 12)
		? cout << "Good day" << endl
		: (hour == 12)
		? cout << "Noon good" << endl
		: cout << "Good evening" << endl;
	return 0;
}

