// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ��������click()���ڼ�¼�û�����ʣ������ж���static����sum=0,
  ÿ�ε��ô˷�����sum��ֵ�����1���������ʱsum��ֵ���������
  click()���鿴��ʱ������Ƕ��١�
*/

using namespace std;

int click() {
	static int num = 0;
	num++;
	cout << "��ǰ�����:" << num << endl;
	return num;
}


int main(int argc, char* argv[])
{
	for (int i = 0; i < 5; ++i) {
		click();
	}
	return 0;
}
