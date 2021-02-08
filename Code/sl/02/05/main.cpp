#include <iostream>
void main()
{
    // 输出占位符
    printf("%4d\n",1);      // 用空格做占位符
    printf("%04d\n",1);     // 用0来做占位符
    int aint_a=10,aint_b=20;
    printf("%d%d\n",aint_a,aint_b);   // 相当于字符连接
    
    
    // 控制字符串输出格式
    char *str="helloworld";
    printf("%s\n%10.5s\n%-10.2s\n%.3s\n",str,str,str,str);
    
    
    // 浮点数输出格式
    float afloat=2998.453257845;
    double adouble=2998.453257845;
    
    // 以指定的格式输出afloat和adouble
    printf("%f\n%15.2f\n%-10.3f\n%f\n",afloat,afloat,afloat,adouble); 
    
    // 科学记数法输出
    printf("%e\n%15.2e\n%-10.3e\n%e\n",afloat,afloat,afloat,adouble);
}
