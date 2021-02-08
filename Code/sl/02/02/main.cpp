#include<iostream>
using namespace std;
void main()
{
    char ch1,ch2;                              // 定义两个变量
    ch1='a';                                   // 赋值为 'a'
    ch2='B';                                   // 赋值为 'B'
    printf("ch1=%c,ch2=%c\n",ch1-32,ch2+32);   // 用字符形式输出一个大于256的数值
    printf("ch1+10=%d\n", ch1+10);             // 以整型格式输出变量ch1
    printf("ch1+10=%c\n", ch1+10);             // 以字符型格式输出变量ch1
    printf("ch2+10=%d\n", ch2+10);             // 以整型格式输出变量ch2
    printf("ch2+10=%c\n", ch2+10);             // 以字符型格式输出变量ch2
}
