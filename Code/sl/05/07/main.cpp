#include <iostream>
using namespace std;
void main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)                    //��������
    {
        for (j = 1; j <= 5-i; j++)                //���ƿո���
            cout << " ";
        for (k = 1; k <= 2 *i - 1; k++)            //���ƴ�ӡ*�ŵ�����
            cout << "*";
        cout << endl;
    }
}

