// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ����ö�����͡����ڡ���һ������������һ��ֵ��֮��ʹ��switch...case
  ��䣬�жϼ��ڣ���������죬��������������ļ�����
*/

using namespace std;
int main(int argc, char* argv[])
{
	enum Season { spring, summer, fall, winter };
	Season s = spring;
	switch (s) {
	case spring: {
		cout << "�����Ǵ���" << endl;
		break;
	}
	case summer: {
		cout << "����������" << endl;
		break;
	}
	case fall: {
		cout << "����������" << endl;
		break;
	}
	case winter: {
		cout << "�����Ƕ���" << endl;
		break;
	}
	}

	return 0;
}
