#include <iostream>
#include <iomanip>
using namespace std;
void main()
{
	double adouble = 123.456789012345;                        // ����double���͵ı���adouble
	cout << adouble << endl;                             // �������adouble��ֵ�����������
	cout << setprecision(9) << adouble << endl;     // ���ø��������������Ϊ9
	cout << setprecision(6);                                   // �ָ�Ĭ�ϸ�ʽ(����Ϊ6)
	
	//cout << setiosflags(ios::fixed);                          // ���ø�ʽ��־
	
	// ���ø�ʽ��־�;��ȣ������adouble�ͻس�
	//cout << resetiosflags(ios::fixed);
	cout <<  setiosflags(ios::fixed)<<setprecision(8) << adouble << endl;
	// ���ø�ʽ��־�������adouble�ͻس�
	cout  << setprecision(5)<<adouble << endl;
	// ���ø�ʽ��־�;��ȣ������adouble�ͻس�
	cout <<  setprecision(1) << adouble << endl;



	// �������
	int aint = 123456;                                        // ��aint����ֵ
	cout << aint << endl;                                   // ����� 123456
	cout << hex << aint << endl;                           // ����� 1e240
	cout << setiosflags(ios::uppercase) << aint << endl; // ����� 1E240
	cout << dec << setw(10) << aint << ',' << aint << endl;   // �����     123456��123456
	cout << setfill('*') << setw(10) << aint << endl;    // ����� **** 123456
	cout << setiosflags(ios::showpos) << aint << endl;   // ����� +123456


	////////////////////////////////////////////////////////////////////////////////
	// �����д��ʮ������
	int aint_i = 0x2F, aint_j = 255;            // �������
	cout << aint_i << endl;           // ���10��������
	cout << hex << aint_i << endl;   // ���ʮ����������
	cout << hex << aint_j << endl;   // ���ʮ����������
	// �����д��ʮ����������
	cout << hex << setiosflags(ios::uppercase) << aint_j << endl;


	////////////////////////////////////////////////////////////////////////////////
	// ���������ȷ��
	int aint_x = 123;                  // �������ͱ�������ֵ
	double adouble_y = -3.1415;          // ����˫��ͨ�����ͱ�������ֵ

	cout << "aint_x=";               // ����ַ���
	cout.width(10);             // ���ÿ��Ϊ10
	cout << aint_x;                  // ���aint_x������ֵ:'       123'��ǰ����7���ո�
	cout << "adouble_y=";               // ����ַ���
	cout.width(10);             // ���ÿ��Ϊ10
	cout << setprecision(3)<<adouble_y << endl;     // ���adouble_y������ֵ:'   -3.1415'��ǰ����3���ո�

	cout.setf(ios::left);      // ����Ϊ�����
	cout << "aint_x=";               // ����ַ���
	cout.width(10);             // ���ÿ��Ϊ10
	cout << aint_x;                  // ���aint_x������ֵ:'123       '��������7���ո�
	cout << "adouble_y=";               // ����ַ���
	cout << adouble_y << endl;      // ���adouble_y������ֵ:'-3.1415   '��������3���ո�

	cout.fill('*');             // ���������ַ�Ϊ*
	cout.precision(4);          // ���þ���Ϊ4λ
	cout.setf(ios::showpos);   // �������ʱ��ʾ����
	cout << "aint_x=";               // �ַ���
	cout.width(10);             // ���ÿ��Ϊ10
	cout << aint_x;                  // ���aint_x������ֵ:'+123******'
	cout << "adouble_y=";               // ����ַ���
	cout.width(10);             // ���ÿ��Ϊ10
	cout << setprecision(3) << adouble_y << endl;           // ���adouble_y������ֵ:'-3.142****'

	////////////////////////////////////////////////////////////////////////////////
	// �����С������
	float afloat_x = 20, afloat_y = -400.00;
	cout << setprecision(0) << afloat_x << ' '<<setprecision(0) <<   afloat_y << endl;
	cout.setf(ios::showpoint);         // ǿ����ʾС�������Ч0
	cout << setprecision(2) << afloat_x << ' ' <<setprecision(1)<< afloat_y << endl;
	cout.unsetf(ios::showpoint);
	cout << setprecision(0)<<afloat_x << ' ' << setprecision(0) << afloat_y << endl;
	cout << setprecision(0) << afloat_x << ' ' << setprecision(0) << afloat_y << endl;
}

