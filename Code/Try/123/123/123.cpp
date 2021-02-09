// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  有一个班级，老师的数量最多10个，学生的数量最多60，尝试设计一个结构体来表这
  个班级
*/



using namespace std;
int main(int argc, char* argv[])
{
	// 班级
	struct Class {

		struct Student {
			char name[64];
		}
		Teacher[10];  // 老师结构体的数组

		struct Teacher {
			char name[64];
		}
		Student[60];  // 学生结构体的数组
	};

	return 0;
}
