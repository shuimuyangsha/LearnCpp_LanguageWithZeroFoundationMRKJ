#include <iostream>
#include <STDARG.H> //��Ҫ������ͷ�ļ�
using namespace std;
void OutputInfo(int num, ...)                        //����һ��ʡ�ԺŲ����ĺ���
{
	va_list arguments;                            //����va_list���ͱ���
	va_start(arguments, num);
	while (num--)                                //��ȡ���в���������
	{
		char* pchData = va_arg(arguments, char*);    //��ȡ�ַ�������
		int iData = va_arg(arguments, int);            //��ȡ��������
		cout << pchData << endl;                    //����ַ���
		cout << iData << endl;                        //�������
	}
	va_end(arguments);
}

void main()
{
	OutputInfo(2, "Beijing", 2008, "Olympic Games", 2008);    //����OutputInfo����
}
