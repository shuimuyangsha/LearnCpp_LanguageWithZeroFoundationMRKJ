
#include <iostream>
#include <vector>
#include <tchar.h>

using namespace std;

//int main1(int argc, _TCHAR* argv[])
//{
//	vector<int> v1, v2;						//������������
//	v1.reserve(10);							//�ֶ�����ռ䣬��������Ԫ����Сֵ��tip���˴�������
//	v2.reserve(10);
//	v1 = vector<int>(8, 7);
//	int array[8] = { 1,2,3,4,5,6,7,8 };			//��������
//	v2 = vector<int>(array, array + 8);		//��v2��ֵ
//	cout << "v1����" << v1.capacity()<< endl;
//	
//	cout << "v1��ǰ����:" << endl;
//	size_t i = 0;
//	for (i = 0; i < v1.size(); i++)
//	{
//		cout << " " << v1[i];
//	}
//	cout << endl;
//	cout << "v2����" << v2.capacity() << endl;
//	cout << "v2��ǰ����:" << endl;
//	for (i = 0; i < v1.size(); i++)
//	{
//		cout << " " << v2[i];
//	}
//	cout << endl;
//	v1.resize(0);
//	cout << "v1������ͨ��resize�������0" << endl;
//	if (!v1.empty())
//		cout << "v1����" << v1.capacity() << endl;
//	else
//		cout << "v1�ǿյ�" << endl;
//	cout << "��v1������չΪ8" << endl;
//	v1.resize(8);
//	cout << "v1��ǰ����:" << endl;
//	for (i = 0; i < v1.size(); i++)
//	{
//		cout << " " << v1[i];
//	}
//	cout << endl;
//	v1.swap(v2);
//	cout << "v1��v2 swap��" << endl;
//	cout << "v1��ǰ����:" << endl;
//	cout << "v1����" << v1.capacity()<< endl;
//	for (i = 0; i < v1.size(); i++)
//	{
//		cout << " " << v1[i];
//	}
//	cout << endl;
//	v1.push_back(3);    //tip:�˴�������
//	cout << "��v1��߼�����Ԫ��3" << endl;
//	cout << "v1����" << v1.capacity()<< endl;
//	for (i = 0; i < v1.size(); i++)
//	{
//		cout << " " << v1[i];
//	}
//	cout << endl;
//	v1.erase(v1.end() - 2);
//	cout << "ɾ���˵����ڶ���Ԫ��" << endl;
//	cout << "v1����" << v1.capacity() << endl;
//	cout << "v1��ǰ����:" << endl;
//	for (i = 0; i < v1.size(); i++)
//	{
//		cout << " " << v1[i];
//	}
//	cout << endl;
//	v1.pop_back();
//	cout << "v1ͨ��ջ����pop_back����������Ԫ��" << endl;
//	cout << "v1��ǰ����:" << endl;
//	cout << "v1����" << v1.capacity() << endl;
//	for (i = 0; i < v1.size(); i++)
//	{
//		cout << " " << v1[i];
//	}
//	cout << endl;
//	return 0;
//}


int main(int argc, _TCHAR* argv[])
{
	vector<int> v1, v2;

	v1.reserve(10);
	v2.reserve(10); 
	v1 = vector<int>(8,7);
	int array[8] = {1,2,3,4,5,6,7,8};
	v2 = vector<int>(array,array+8);
	cout << "v1����" << v1.capacity()  << endl;

	cout << "v1��ǰ���" << endl;
	size_t i = 0;
	for (i = 0; i < v1.size();i++) {
		cout << " " << v1[i];
	}
	cout << endl;
	cout << "v2����" << v2.capacity() << endl;
	cout << "v2��ǰ���" << endl;
	for (i = 0; i < v2.size();i++) {
		cout << " " << v2[i];
	}
	cout << endl;
	
	v1.resize(0);
	cout << "v1������ͨresize������Ϊ0" << endl;
	if (!v1.empty())
		cout << "v1����" << v1.capacity() << endl;
	else
		cout << "v1�ǿյ�" << endl;

	cout << "��v1��������չΪ8" << endl;
	v1.resize(8);
	cout << "v1��ǰ���" << endl;
	for (i = 0; i < v1.size();i++) {
		cout << " " << v1[i];
	}
	cout << endl;
	v1.swap(v2);
	cout << "v1��v2������" << endl;
	cout << "v1��ǰ���" << endl;
	cout << "v1����" << v1.capacity() << endl;
	for (i = 0; i < v1.size();i++) {
		cout << " " << v1[i];
	}
	cout << endl;
	v1.push_back(3);   

	cout << "��v1���������Ԫ��3" << endl;
	cout << "v1����" << v1.capacity()  << endl;
	for (i = 0; i < v1.size();i++) {
		cout << " " << v1[i];
	}
	cout << endl;
	v1.erase(v1.end() - 2);
	cout << "ɾ���˵����ڶ���Ԫ��" << endl;
	cout << "v1����" << v1.capacity() << endl;
	cout << "v1��ǰ���" << endl;
	for (i = 0; i < v1.size();i++) {
		cout << " " << v1[i];
	}
	cout << endl;
	v1.pop_back();
	cout << "v1ͨ��ջ����pop_back ���������һ��Ԫ��" << endl;
	cout << "v1��ǰ���" << endl;
	cout << "v1����" << v1.capacity() << endl;

	for (i = 0; i < v1.size();i++) {
		cout << " " << v1[i];
	}
	cout << endl;
	return 0;
}



