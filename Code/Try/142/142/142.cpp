// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  �����ֻ���Ĭ������ΪӢ�ģ��������ֻ�ʱ���Խ�Ĭ����������Ϊ���ġ���д�ֻ��࣬��
  �ι��췽��ʹ��Ĭ��������ƣ������вι��췽���޸��ֻ���Ĭ�����ԡ�
*/

using namespace std;

class CMobile {
public:
	CMobile() {
		// ���ַ�ʽ��¼�ڲ���һ����ʱ�Ķ���
		// ��û��Ӱ�쵽��ǰ�Ķ���
		// CMobile("����.�й�");

		// ��ȷ�ķ�ʽ
		new (this)CMobile("����.�й�");
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
