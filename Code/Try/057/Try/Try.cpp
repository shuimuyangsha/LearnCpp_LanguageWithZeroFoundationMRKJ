// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
/*
  打印出如下所示的菱形：
   *  
  * *
 *   *
  * *
   *
*/

using namespace std;

int main(int argc, char* argv[])
{
  int i,j,k;
  for(i=0;i<=3;i++) {
    for(j=0;j<=2-i;j++)
      printf(" ");
    for(k=0;k<=2*i;k++)
      printf("*");
    printf("\n");
  }
  for(i=0;i<=2;i++) {
    for(j=0;j<=i;j++)
      printf(" ");
    for(k=0;k<=4-2*i;k++)
      printf("*");
    printf("\n");
  }
  return 0;
}

