// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  һ�����80�׸߶��������£�ÿ����غ󷴵��ĸ߶�Ϊԭ�߶ȵ�һ�룬��6�η��������ף�
*/

using namespace std;
int main(int argc, char* argv[])
{
	float high = 80;
	for (int i = 1; i <= 6; ++i) {
		high /= 2.0f;
	}
	cout << "��6�η���" << high << "��" << endl;

	return 0;
}

