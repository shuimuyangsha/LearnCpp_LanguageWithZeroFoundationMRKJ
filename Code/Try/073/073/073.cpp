// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ��Ӱ�У��������˱�����ץ��ʱ�����������������˵������Ȩ���ֳ�Ĭ������˵��ÿһ
  �仰�����Ϊ����֤������ʹ�÷����������ڿ���̨����������˿�ѡ���״̬��
 */

using namespace std;
void DoStatus(int val) {
	cout << "���˽���" << val << "����Ʒ" << endl;
}
void DoStatus(const char * str) {
	cout << "����˵:\"" << str << "\"" << endl;
}
int main(int argc, char* argv[])
{
	DoStatus(100);
	DoStatus("��Ҫ����ʦ");
	return 0;
}

