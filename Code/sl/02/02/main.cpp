#include<iostream>
using namespace std;
void main()
{
    char ch1,ch2;                              // ������������
    ch1='a';                                   // ��ֵΪ 'a'
    ch2='B';                                   // ��ֵΪ 'B'
    printf("ch1=%c,ch2=%c\n",ch1-32,ch2+32);   // ���ַ���ʽ���һ������256����ֵ
    printf("ch1+10=%d\n", ch1+10);             // �����͸�ʽ�������ch1
    printf("ch1+10=%c\n", ch1+10);             // ���ַ��͸�ʽ�������ch1
    printf("ch2+10=%d\n", ch2+10);             // �����͸�ʽ�������ch2
    printf("ch2+10=%c\n", ch2+10);             // ���ַ��͸�ʽ�������ch2
}
