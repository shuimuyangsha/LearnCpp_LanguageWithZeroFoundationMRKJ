#include <iostream>
using namespace std;
typedef unsigned int UINT;         //�Զ�������
long Fac(const UINT n)        //���庯��
{
    long ret = 1;                //����������
    for(int i=1; i<=n; i++)            //�ۼƳ˻�
    {
        ret *= i;
    }
    return ret;                    //���ؽ��
}

void main()
{
    int n ;
    long f;
    cout << "please input a number" << endl;
    cin >> n ;
    f=Fac(n);
    cout << "Result :" << f << endl;
}
