#include <iostream>
using namespace std;
class CEmployee                            //����Ա����
{
public:
	int m_ID;                                //����Ա��ID
	char m_Name[128];                        //����Ա������
	char m_Depart[128];                        //������������
	CEmployee()                            //����Ĭ�Ϲ��캯��
	{
		memset(m_Name, 0, 128);                //��ʼ��m_Name
		memset(m_Depart, 0, 128);            //��ʼ��m_Depart
	}
	void OutputName()                            //���干�г�Ա����
	{
		cout << "Ա������" << m_Name << endl;        //���Ա������
	}
};
class COperator :public CEmployee                //����һ������Ա�࣬��CEmployee����������
{
public:
	char m_Password[128];                    //��������
	bool Login()                            //�����¼��Ա����
	{
		if (strcmp(m_Name, "MR") == 0 &&        //�Ƚ��û���
			strcmp(m_Password, "KJ") == 0)        //�Ƚ�����
		{
			cout << "��¼�ɹ�!" << endl;            //�����Ϣ
			return true;                    //���÷���ֵ
		}
		else
		{
			cout << "��¼ʧ��!" << endl;            //�����Ϣ
			return false;                    //���÷���ֵ
		}
	}
};
int main(int argc, char* argv[])
{
	COperator optr;                            //����һ��COperator�����
	strcpy(optr.m_Name, "MR");                //���ʻ����m_Name��Ա
	strcpy(optr.m_Password, "KJ");                //����m_Password��Ա
	optr.Login();                            //����COperator���Login��Ա����
	optr.OutputName();                        //���û���CEmployee��OutputName��Ա����
	return 0;
}
