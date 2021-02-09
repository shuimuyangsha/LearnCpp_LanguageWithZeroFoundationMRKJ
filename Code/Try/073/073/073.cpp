// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  电影中，当嫌疑人被警方抓捕时，警方都会对嫌疑人说“你有权保持沉默，但你说的每一
  句话都会成为呈堂证供”。使用方法的重载在控制台上输出嫌疑人可选择的状态。
 */

using namespace std;
void DoStatus(int val) {
	cout << "犯人交出" << val << "包毒品" << endl;
}
void DoStatus(const char * str) {
	cout << "犯人说:\"" << str << "\"" << endl;
}
int main(int argc, char* argv[])
{
	DoStatus(100);
	DoStatus("我要找律师");
	return 0;
}

