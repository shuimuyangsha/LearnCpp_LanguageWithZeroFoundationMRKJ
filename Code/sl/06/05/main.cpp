#include <iostream>
using namespace std;
long lCount;
void move(int n,char x,char y,char z)//��n�����Ӵ�x�����y���Ƶ�z���ϡ�
{
    if(n==1)
        cout << "Times:" << ++lCount << x << "->" << z << endl;
    else
    {
        move(n-1,x,z,y);
        cout << "Times:" << ++lCount << x << "->" << z <<endl;
        move(n-1,y,x,z);
    }
}
void main()
{
    int n ;
    lCount=0;
    cout << "please input a number" << endl;
    cin >> n ;
    move(n,'a','b','c');
}
