// Try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

/*
  打印如下图形：
  **********
  *         *
  **********
  */

using namespace std;

int main(int argc, char* argv[])
{
  for(int i=0; i<3; ++i) {
    for(int j = 0; j<9; ++j) {
      if(i==1) {
        
        if(j == 0 || j == 8) {
          cout << "*";
        }
        else {
          cout << " ";
        }
      }
      else {
        cout << "*";
      }
    }
    cout << endl;
  }
  return 0;
}

