#include <iostream>
using namespace std;
void OutputInfo(const char* pchData = "One world,one dream!")
{
	cout << pchData << endl;    //�����Ϣ
}
void main()
{
	OutputInfo();                            //����Ĭ��ֵ��Ϊ����ʵ�ʲ���
	OutputInfo("Beijing 2008 Olympic Games!");    //ֱ�Ӵ���ʵ�ʲ���
}
