#include <stdio.h>
#include<string.h>

void sort(char *name[], int n)                  //���ַ�����������
{
	char *temp;
	int i, j, k;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
			if (strcmp(name[k], name[j]) > 0) k = j;
		if (k != i)
		{
			temp = name[i];
			name[i] = name[k];
			name[k] = temp;
		}
	}
}
void print(char *name[], int n)                  //����ַ��������е�Ԫ��
{
	int i = 0;
	char *p;
	p = name[0];
	while (i < n)
	{
		p = *(name + i++);
		printf("%s\n",p);
	}
}
int main()
{
	char *name[] ={ "mingri","soft","C++","mr" };     //����ָ������
	int n = 4;
	sort(name, n);
	print(name, n);
	return 0;
}
