#include <iostream>
using namespace std;
struct PersonInfo                            //����ṹ��
{
	int index;
	char name[30];
	short age;
};
void ShowStuctMessage(struct PersonInfo MyInfo)    //�Զ��庯��������ṹ�������Ա
{
	cout << MyInfo.index << endl;
	cout << MyInfo.name << endl;
	cout << MyInfo.age << endl;

}
void main()
{

	PersonInfo pInfo;                        //�����ṹ��
	pInfo.index = 1;
	strcpy(pInfo.name, "����");
	pInfo.age = 20;
	ShowStuctMessage(pInfo);                //�����Զ��庯��
}
