#include <iostream>
using namespace std;
int main()
{
	int *pI = NULL;
	int i = 4;
	pI = &i;
	float f = 3.333f;
	bool b = true;
	void *pV = NULL;
	cout << "���θ�ֵ����ָ��" << endl;
	pV = pI;
	cout << "pV = pI --------" << *(int*)pV << endl;
	cout << "pV = pI ---------תΪfloat����ָ��" << *(float*)pV << endl;
	pV = &f;
	cout << "pV = &f --------" << *(float*)pV << endl;
	cout << "pV = &f --------תΪint����ָ��" << *(int*)pV << endl;
	return 0;
}
