#include <iostream>
using namespace std;
void main()
{
    int ivar = 0 ;            //����һ�����ͱ�������ʼ��Ϊ0
    int num = 0;            //����һ�����ͱ�������ʼ��Ϊ0
label:                      //����һ����ǩ
    ivar++;                    //ivar�Լ�1
    num += ivar;            //�ۼ����
    if (ivar <10)            //�ж�ivar�Ƿ�С��100
    {
        goto label;            //ת���ǩ
    }
    cout << num << endl;
}
