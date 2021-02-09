// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义一个班级结构体，它有一个成员的类型是“学生”结构体数组，代表这个班级的所有
  学生；再写代码，输出所有学生的姓名。
*/

using namespace std;
int main(int argc, char* argv[])
{

	struct {
		struct {
			char name[64];
		}students[10]; // 学生
		int count;// 学生数量
	} mclass;
	int index = 0;
	strcpy(mclass.students[index].name, "小张");
	index++;
	strcpy(mclass.students[index].name, "小王");
	index++;

	for (int i = 0; i < index; ++i) {
		cout << mclass.students[i].name << endl;
	}


	return 0;
}
