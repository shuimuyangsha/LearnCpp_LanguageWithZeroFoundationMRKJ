#include <iostream>
using namespace std;
void ShowMessage(); //�����������
void ShowAge(); //�����������
void ShowIndex(); //�����������
void main()
{
	ShowMessage(); //�����������
	ShowAge(); //�����������
	ShowIndex(); //�����������
}
void ShowMessage()
{
	cout << "HelloWorld!" << endl;
}
void ShowAge()
{
	int iAge = 23;
	cout << "age is :" << iAge << endl;
}
void ShowIndex()
{
	int iIndex = 10;
	cout << "Index is :" << iIndex << endl;
}
