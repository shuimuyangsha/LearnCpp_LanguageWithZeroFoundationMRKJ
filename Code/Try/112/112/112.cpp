// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ��дһ���������жϡ�ֻ��֪�����ֹͣ���˲�֪����μӿ��ٶȡ����С��ӿ족���ֵ�λ�ã��������ַ�����ָ�롣
*/

const char * FindStr(const char * str, const char * substr) {
	const char * p = str;
	bool bFind = false;
	while (*p && strlen(p) >= strlen(substr)) {
		// ����ַ��Ƚ��Ƿ����
		int i;
		for (i = 0; i < strlen(substr); ++i) {
			if (p[i] != substr[i]) {
				break;
			}
		}
		if (i == strlen(substr)) {
			bFind = true;
			break;
		}
		p++;
	}
	if (bFind) {
		return p;
	}
}

using namespace std;
int main(int argc, char* argv[])
{
	const char * pos = FindStr("ֻ��֪�����ֹͣ���˲�֪����μӿ��ٶȡ�", "�ӿ�");
	cout << pos << endl;
	return 0;
}
