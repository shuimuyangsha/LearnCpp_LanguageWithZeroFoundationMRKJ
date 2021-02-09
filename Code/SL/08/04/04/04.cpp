#include <iostream>
#include <string>
using namespace std;
namespace pet
{
	typedef string kind;
	typedef string petname;
	typedef string voice;
	typedef class dog
	{
	private:
		kind m_kindName;                  //���ﹷ����
	protected:                             //�����б���Ҫ����̳У�����Ҫʹ������������ԡ�
		petname m_dogName;
		int m_age;
		voice m_voice;
		void setVoice(kind name);
	public:
		dog(kind name);
		void sound();
		void setName(petname name);
	} Dog, DOG;                                  //�����˱�������Dog,DOG������dog
	void dog::setVoice(kind name)
	{
		if (name == "����Ȯ")
		{
			m_voice = "��";
		}
		else if (name == "��Ȯ")
		{
			m_voice = "���";
		}
		else if (name == "�Ƶ�Ȯ")
		{
			m_voice = "��";
		}
	}
	dog::dog(kind name)
	{
		m_kindName = name;
		m_dogName = name;
		setVoice(name);
	}
	void dog::sound()
	{
		cout << m_dogName << "����" << m_voice << "�Ľ���" << endl;
	}
	void dog::setName(petname name)
	{
		m_dogName = name;
	}
}
using pet::dog;                              //ʹ��pet�ռ�ĳ���Ȯdog��
using pet::DOG;
int main()
{
	dog a = dog("����Ȯ");                      //���ƿռ���౻���������󣬿���ֱ��ʹ��
	pet::Dog b = pet::Dog("��Ȯ");              //��������Ҫʹ�����ֿռ�
	pet::DOG c = pet::DOG("�Ƶ�Ȯ");
	a.setName("С��");
	c.setName("����");
	a.sound();
	b.sound();
	c.sound();
	return 0;
}