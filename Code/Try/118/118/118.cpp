// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���һ�����򣬸ó�����ܲ������������Ͳ����������Щ�����ĺ͡�
*/

using namespace std;
int main(int argc, char* argv[])
{
	int sum = 0;
	while (argc > 1) {
		sum += atoi(argv[argc - 1]);
		argc--;
	}
	cout << sum << endl;
	return 0;
}
