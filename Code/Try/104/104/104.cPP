// Try.cpp : Defines the entry point for the console application.
//

#include<iostream>
using  namespace std;

/*
  打印电影演员表。
*/


int main(int argc, char* argv[])
{
	char table[][64] = {
	  "导演, 文牧野",
	  "主演, 徐峥。",
	  "主演, 王传君，",
	  "主演, 周一围。",
	  "主演, 谭卓"
	};
	 char  (*p)[64] = table;
	 cout << *(p + 0) << endl;
	 cout << *(p + 1) << endl;
	 cout << *(p + 2) << endl;
	 cout << *(p + 3) << endl;
	 cout << *(p + 4) << endl;
	return 0;
}
