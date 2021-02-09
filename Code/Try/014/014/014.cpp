// Try.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

/*
  用户创建完新账户后，服务器为保护用户隐私，使用异或运算对用户密码进行二次加密，
  计算公式为“加密数据 = 原始密码 ^ 加密算子”，已知加密算子为整数79，
  请问用户密码459137经过加密后的值是多少？
*/

int main(int argc, char* argv[])
{
	printf("%d\n", 459137 ^ 79);
	return 0;
}

