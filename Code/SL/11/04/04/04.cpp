#include <iostream>
using namespace std;
class CEmployee    //����CEmployee��
{
public:
	int m_ID;//�������ݳ�Ա
	char m_Name[128];//�������ݳ�Ա
	char m_Depart[128];

	CEmployee()//���幹�캯��
	{
	}
	~CEmployee()//��������
	{
	}
	void OutputName()//����OutputName��Ա����
	{
		cout << "����CEmployee���OutputName��Ա����: " << endl;    //�������Ա����
	}//�������ݳ�Ա
};
class COperator :public CEmployee//����COperator��
{
public:
	char m_Password[128];//�������ݳ�Ա
	void OutputName()//����OutputName��Ա����
	{
		cout << "����COperator���OutputName��Ա����:" << endl;//�������Ա����
	}

};
int main(int argc, char* argv[])//����Ա����
{
	COperator optr;    //����COperator����
	optr.OutputName();//����COperator���OutputName��Ա����
	return 0;
}
