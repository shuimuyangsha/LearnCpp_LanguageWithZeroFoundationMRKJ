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
		memset(m_Name, 0, 128);                    //��ʼ�����ݳ�Ա
		memset(m_Depart, 0, 128);                //��ʼ�����ݳ�Ա
	}
	virtual void OutputName()                        //����һ�����Ա����
	{
		cout << "Ա������: " << m_Name << endl;            //�����Ϣ
	}
};
class COperator :public CEmployee                    //��CEmployee������һ������
{
public:
	char m_Password[128];                        //�������ݳ�Ա
	void OutputName()                            //����OutputName�麯��
	{
		cout << "����Ա����: " << m_Name << endl;            //�����Ϣ
	}
};
int main(int argc, char* argv[])
{
	CEmployee *pWorker = new COperator();    //����CEmployee����ָ�룬����COperator�๹�캯��
	strcpy(pWorker->m_Name, "MR");        //����m_Name���ݳ�Ա��Ϣ
	pWorker->OutputName();                //����COperator���OutputName��Ա����
	delete pWorker;                    //�ͷŶ���
	return 0;
}
