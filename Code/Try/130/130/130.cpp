// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ����һ��������ʦ�Ľṹ�塰struct Teacher��������һ����Բ������count����
  �������Ĺ�����ҵ��������������һ���������ú������Խ���һ��ѧ����һ����ʦ��Ϊ��
  �����ں����У���ʦ��ѧ����һ�����������������Ĺ�������������
*/
struct Teacher {
	int count;
};
struct Student {
	int score;
};

void Check(Teacher * pTeacher, Student * pStudent) {
	pStudent->score = 98;
	pTeacher->count++;
}

using namespace std;
int main(int argc, char* argv[])
{
	Teacher t = { 0 };
	Student s1, s2, s3;
	Check(&t, &s1);
	Check(&t, &s2);
	Check(&t, &s3);

	cout << t.count << "\n";
	cout << s1.score << endl;
	cout << s2.score << endl;
	cout << s3.score << endl;
	return 0;
}
