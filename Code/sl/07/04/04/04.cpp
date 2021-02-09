#include<iostream>
#include<string>
using namespace std;
void main()
{
	char str1[30], str2[20];
	cout << "please input string1:" << endl;
	gets_s(str1, sizeof(str1));
	cout << "please input string2:" << endl;
	gets_s(str2, sizeof(str2));
	strcat(str1, str2);
	cout << "Now the string1 is:" << endl;
	puts(str1);
}

