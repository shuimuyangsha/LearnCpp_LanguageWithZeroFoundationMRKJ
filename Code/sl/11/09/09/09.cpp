#include <iostream>
using namespace std;
class CAnimal                                //����һ��������
{
public:
	CAnimal()                                //���幹�캯��
	{
		cout << "�����౻����" << endl;                //�����Ϣ
	}
	void Move()                            //�����Ա����
	{
		cout << "�����ܹ��ƶ�" << endl;                //�����Ϣ
	}
};
class CBird : virtual public CAnimal            //��CAnimal����̳�CBird��
{
public:
	CBird()                                //���幹�캯��
	{
		cout << "���౻����" << endl;                //�����Ϣ
	}
	void FlyInSky()                            //�����Ա����
	{
		cout << "���ܹ�����շ���" << endl;            //�����Ϣ
	}
	void Breath()                            //�����Ա����
	{
		cout << "���ܹ�����" << endl;                //�����Ϣ
	}
};
class CFish : virtual public CAnimal            //��CAnimal����̳�CFish
{
public:
	CFish()                                //���幹�캯��
	{
		cout << "���౻����" << endl;                //�����Ϣ
	}
	void SwimInWater()                        //�����Ա����
	{
		cout << "���ܹ���ˮ����" << endl;            //�����Ϣ
	}
	void Breath()                            //�����Ա����
	{
		cout << "���ܹ�����" << endl;                //�����Ϣ
	}
};
class CWaterBird : public CBird, public CFish        //��CBird��CFish����������CWaterBird
{
public:
	CWaterBird()                            //���幹�캯��
	{
		cout << "ˮ���౻����" << endl;                //�����Ϣ
	}
	void Action()                            //�����Ա����
	{
		cout << "ˮ���ܷ�������" << endl;            //�����Ϣ
	}
};
int main(int argc, char* argv[])                        //������
{
	CWaterBird waterbird;                        //����ˮ�����
	return 0;
}
