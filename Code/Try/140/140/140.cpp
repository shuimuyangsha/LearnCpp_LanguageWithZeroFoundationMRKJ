// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ����ѧ���ࡰCStudent��������һ�������͵ı�����ʹ�����öԳ�Ա���������
  ��ֵ�����ѧ�����Ա��ֵ��
*/

using namespace std;

class CStudent {
public:
	char name[64];
	int age;
};


int main(int argc, char* argv[])
{
	CStudent stu;
	CStudent& stu_ref = stu;
	strcpy(stu_ref.name, "��С��");
	stu_ref.age = 13;

	cout << "name:" << stu.name << endl;
	cout << "age :" << stu.age << endl;

	return 0;
}
