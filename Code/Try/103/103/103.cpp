// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���һ��ָ��pָ���м۸�����飬�ճ�ʹ�õļ۸��Ϊprice[][]��������
  �ڼ䳬�оٰ��ؼۻ��ʹ������Ʒ�۸��price_dis[][]�����Խ�������
  ��ʹ�õļ۸��Ϊ��ڼ�۸�
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
	float rate = 0.85f; // ��85��
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			*(*(pprice_dis + i) + j) = rate * *(*(pprice + i) + j);
		}
	}

	{
		cout << "����֮��ļ۸��:" << endl;
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				cout << *(*(pprice_dis + i) + j) << " ";
			}
			cout << endl;
		}
	}


	return 0;
}
