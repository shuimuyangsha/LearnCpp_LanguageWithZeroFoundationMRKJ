#include <iostream>
#include<string.h>
using namespace std;
class CEmployee                                        //����CEmployee��
{
public:
	int m_ID;                                            //�������ݳ�Ա
	char m_Name[128];                                    //�������ݳ�Ա
	char m_Depart[128];                                    //�������ݳ�Ա
	CEmployee(const char name[20])                                //�������Ĺ��캯��
	{
		strcpy(m_Name, name);
		cout << m_Name << "������CEmployee��������Ĺ��캯��" << endl;
	}
	CEmployee()                                        //�޲ι��캯��
	{
		strcpy(m_Name, "MR");
		cout << m_Name << "CEmployee���޲ι��캯��������" << endl;
	}
	~CEmployee()                                        //��������
	{
		cout << "CEmployee����������������" << endl;        //�����Ϣ
	}
};
class COperator :public CEmployee                            //��CEmployee������һ������
{
public:
	char m_Password[128];                                //�������ݳ�Ա
	COperator(const char name[]) :CEmployee(name)                //��ʾ���ø���������Ĺ��캯��
	{        //�������ݳ�Ա
		cout << "COperator�๹�캯��������" << endl;            //�����Ϣ
	}
	COperator() :CEmployee("JACK")                        //��ʾ���ø���������Ĺ��캯��
	{        //�������ݳ�Ա
		cout << "COperator�๹�캯��������" << endl;            //�����Ϣ
	}
	~COperator()                                        //��������
	{
		cout << "COperator����������������" << endl;            //�����Ϣ
	}
};
int main(int argc, char* argv[])                                //������
{
	COperator optr1;                        //����һ��COperator���󣬵��������޲ι��캯��
    COperator optr2("LaoZhang");           //����һ��COperator���󣬵���������������캯��
	return 0;
}
