// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  �ں����������ṹ��ʱ��ֱ�Ӷ���һ���ýṹ���ָ�룬֮���ø�ָ��ı�ṹ���г�Ա
  ��ֵ��
*/

using namespace std;

struct Student {
	int age;
};
void AddAge(Student * pStudent) {
	pStudent->age += 1;
}


int main(int argc, char* argv[])
{
	Student a;
	a.age = 12;
	cout << "�ṹ���е�ageֵ��" <<a.age << endl;
	AddAge(&a);
	cout << "��ָ��ı��ṹ���е�ageֵ��" << a.age << endl;
	return 0;
}
