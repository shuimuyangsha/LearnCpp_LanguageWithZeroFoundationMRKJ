// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  智能手机的默认语言为英文，但制造手机时可以将默认语言设置为中文。编写手机类，无
  参构造方法使用默认语言设计，利用有参构造方法修改手机的默认语言。
*/

using namespace std;

class CMobile {
public:
	CMobile() {
		// 这种方式相录于产了一个临时的对象，
		// 并没有影响到当前的对象
		// CMobile("中文.中国");

		// 正确的方式
		new (this)CMobile("中文.中国");
	}

	CMobile(const char * lang) {
		strcpy(language, lang);
	}

	char language[64];
};


int main(int argc, char* argv[])
{
	CMobile phone1;
	CMobile phone2("English");

	cout << phone1.language << endl;
	cout << phone2.language << endl;
	return 0;
}
