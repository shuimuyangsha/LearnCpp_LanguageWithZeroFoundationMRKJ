// Try.cpp : Defines the entry point for the console application.
//


#include <string>
#include <iostream>


/*
  ������ѧԺ��վ��ҳ�У�����ʹ���˻�����¼������ʹ���ֻ��ŵ�¼��������ʹ�õ��������ַ��¼��
  ���ж�ĳ�û��Ƿ���Ե�¼������֪�������������¼�¼���˻������������ֻ��ţ�1234567890��
  �������䣺zhangsan@163.com����
*/

using namespace std;
int main(int argc, char* argv[])
{
	std::string input;
	cin >> input;

	if (input == "����") {
		cout << "���Ե�¼" << endl;
		return 0;
	}

	if (input == "1234567890") {
		cout << "���Ե�¼" << endl;
		return 0;
	}

	if (input == "zhangsan@163.com") {
		cout << "���Ե�¼" << endl;
		return 0;
	}

	cout << "�����Ե�¼" << endl;
	return 0;
}

