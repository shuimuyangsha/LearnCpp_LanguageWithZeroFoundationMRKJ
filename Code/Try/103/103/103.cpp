// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  设计一个指针p指向超市价格表数组，日常使用的价格表为price[][]，但国庆
  期间超市举办特价活动，使用新商品价格表price_dis[][]。尝试将超市日
  常使用的价格改为活动期间价格。
 */

using namespace std;
int main(int argc, char* argv[])
{
	float price[3][3] = {
	  {1.2f, 3.8f, 4.9f},
	  {2.4f, 5.7f, 6.8f},
	  {3.3f, 4.3f, 7.5f},
	};
	float prince_dis[3][3];
	float(*pprice)[3] = price;
	float(*pprice_dis)[3] = prince_dis;
	float rate = 0.85f; // 打85折
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			*(*(pprice_dis + i) + j) = rate * *(*(pprice + i) + j);
		}
	}

	{
		cout << "打折之后的价格表:" << endl;
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				cout << *(*(pprice_dis + i) + j) << " ";
			}
			cout << endl;
		}
	}


	return 0;
}
