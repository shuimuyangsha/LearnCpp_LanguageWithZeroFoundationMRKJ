#include <iostream>
void main()
{
    // ���ռλ��
    printf("%4d\n",1);      // �ÿո���ռλ��
    printf("%04d\n",1);     // ��0����ռλ��
    int aint_a=10,aint_b=20;
    printf("%d%d\n",aint_a,aint_b);   // �൱���ַ�����
    
    
    // �����ַ��������ʽ
    char *str="helloworld";
    printf("%s\n%10.5s\n%-10.2s\n%.3s\n",str,str,str,str);
    
    
    // �����������ʽ
    float afloat=2998.453257845;
    double adouble=2998.453257845;
    
    // ��ָ���ĸ�ʽ���afloat��adouble
    printf("%f\n%15.2f\n%-10.3f\n%f\n",afloat,afloat,afloat,adouble); 
    
    // ��ѧ���������
    printf("%e\n%15.2e\n%-10.3e\n%e\n",afloat,afloat,afloat,adouble);
}
