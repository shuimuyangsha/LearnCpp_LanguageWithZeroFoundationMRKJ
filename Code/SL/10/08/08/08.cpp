#include<iostream>
using namespace std;

namespace Output                            //���������ռ�
{
	void Show()                            //���庯��
	{
		cout << "Output's function!" << endl;
	}
	namespace MyName                    //����Ƕ�������ռ�
	{
		void Demo()                        //���庯��
		{
			cout << "MyName's function!" << endl;
		}
	}
}

int main()
{
	Output::Show();                        //����Output�����ռ��еĺ���
	Output::MyName::Demo();                //����MyName�����ռ��еĺ���
	return 0;
}
