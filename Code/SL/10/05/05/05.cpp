#include <iostream>
class CItem;                                //ǰ������CItem��
class CList                                //����CList��
{
private:
	CItem * m_pItem;                        //����˽�����ݳ�Աm_pItem
public:
	CList();                                //����Ĭ�Ϲ��캯��
	~CList();                                //������������
	void OutputItem();                        //����OutputItem��Ա����
};
class CItem                                //����CItem��
{
	friend void CList::OutputItem();                //������Ԫ����
private:
	char m_Name[128];                        //����˽�����ݳ�Ա
	void OutputName()                        //����˽�г�Ա����
	{
		printf("%s\n", m_Name);                //������ݳ�Ա��Ϣ
	}
public:
	void SetItemName(const char* pchData)        //���干�з���
	{
		if (pchData != NULL)                    //�ж�ָ���Ƿ�Ϊ��
		{
			strcpy(m_Name, pchData);        //��ֵ�ַ���
		}
	}
	CItem()                                //���캯��
	{
		memset(m_Name, 0, 128);                //��ʼ�����ݳ�Աm_Name
	}
};
void CList::OutputItem()                        //CList���OutputItem��Ա������ʵ��
{
	m_pItem->SetItemName("BeiJing");            //����CItem��Ĺ��з���
	m_pItem->OutputName();                //����Ԫ�����з���CItem���˽�з���OutputName
}
CList::CList()                                //CList���Ĭ�Ϲ��캯��
{
	m_pItem = new CItem();                    //����m_pItem����
}
CList::~CList()                                //CList�����������
{
	delete m_pItem;                        //�ͷ�m_pItem����
	m_pItem = NULL;                        //��m_pItem��������Ϊ��
}
int main(int argc, char* argv[])                    //������
{
	CList list;                                //����CList����list
	list.OutputItem();                        //����CList��OutputItem����
	return 0;
}
