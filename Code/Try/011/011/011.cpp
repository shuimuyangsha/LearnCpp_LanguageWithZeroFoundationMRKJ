// Try.cpp : Defines the entry point for the console application.
//


#include <iostream>


/*
  ����������ӦƸ�ߣ�һλ25�꣬һλ32�ꡣ�ù�˾��Ƹ��Ϣ����һ��Ҫ��
  ������ӦƸ�ߵ�������23~30��֮�䣬�ж�������ӦƸ���Ƿ��������Ҫ��
*/
using namespace std;
int main(int argc, char* argv[])
{
	int age_a = 25;
	int age_b = 32;
	if (23 <= age_a && age_a <= 30) {
		cout << age_a << "��,������ƸҪ��" << endl;
	}
	else {
		cout << age_a << "��,��������ƸҪ��" << endl;
	}

	if (23 <= age_b && age_b <= 30) {
		cout << age_b << "��,������ƸҪ��" << endl;
	}
	else {
		cout << age_b << "��,��������ƸҪ��" << endl;
	}
	return 0;
}

