#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int iInput;
	cout << "���������֣�" << endl;
	cin >> iInput; //�����û�����??
	if (iInput % 3 == 0 && iInput % 5 == 0 && iInput % 7 == 0)
		cout << "����" << iInput << "�ܱ�3��5��7ͬʱ����" << endl;
	return 0;
}