#include <iostream>
using namespace std;
class CEmployee                                //����CEmployee��
{
public:
	int m_ID;                                    //�������ݳ�Ա
	char m_Name[128];                            //�������ݳ�Ա
	char m_Depart[128];                            //�������ݳ�Ա
	CEmployee()                                //���幹�캯��
	{
		cout << "CEmployee�๹�캯��������" << endl;        //�����Ϣ
	}
	~CEmployee()                                //��������
	{
		cout << "CEmployee����������������" << endl;        //�����Ϣ
	}
};
class COperator :public CEmployee                    //��CEmployee������һ������
{
public:
	char m_Password[128];                        //�������ݳ�Ա
	COperator()                                //���幹�캯��
	{
		strcpy(m_Name, "MR");                    //�������ݳ�Ա
		cout << "COperator�๹�캯��������" << endl;        //�����Ϣ
	}
	~COperator()                                //��������
	{
		cout << "COperator����������������" << endl;        //�����Ϣ
	}
};
int main(int argc, char* argv[])                        //������
{
	COperator optr;                                //����һ��COperator����
	return 0;
}
