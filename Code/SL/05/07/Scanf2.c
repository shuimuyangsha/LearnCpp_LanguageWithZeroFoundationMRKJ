#include<stdio.h>

int main()
{
	float Pie=3.14f;	/*定义圆周率*/
	
	float fArea;		/*定义变量*/
	float fRadius;
	puts("Enter the radius:");
	scanf("%f",&fRadius);	/*输入圆的半径*/
	fArea=2*fRadius*Pie;	/*计算圆的周长*/
	printf("The perimeter is: %.2f\n",fArea);		/*输出计算的结果*/
    fArea=4/3*(fRadius*fRadius*fRadius*Pie);	/*计算球的体积*/
	printf("The volume is: %.2f\n",fArea);		/*输出计算的结果*/
	return 0;			/*程序结束*/
}