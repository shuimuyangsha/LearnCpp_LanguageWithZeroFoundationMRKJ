#include <iostream>
#include <iomanip>
using namespace std;
void main()
{
	double adouble = 123.456789012345;                        // 定义double类型的变量adouble
	cout << adouble << endl;                             // 输出变量adouble的值，并输出换行
	cout << setprecision(9) << adouble << endl;     // 设置浮点数的输出精度为9
	cout << setprecision(6);                                   // 恢复默认格式(精度为6)
	
	//cout << setiosflags(ios::fixed);                          // 设置格式标志
	
	// 设置格式标志和精度，并输出adouble和回车
	//cout << resetiosflags(ios::fixed);
	cout <<  setiosflags(ios::fixed)<<setprecision(8) << adouble << endl;
	// 设置格式标志，并输出adouble和回车
	cout  << setprecision(5)<<adouble << endl;
	// 设置格式标志和精度，并输出adouble和回车
	cout <<  setprecision(1) << adouble << endl;



	// 整数输出
	int aint = 123456;                                        // 对aint赋初值
	cout << aint << endl;                                   // 输出： 123456
	cout << hex << aint << endl;                           // 输出： 1e240
	cout << setiosflags(ios::uppercase) << aint << endl; // 输出： 1E240
	cout << dec << setw(10) << aint << ',' << aint << endl;   // 输出：     123456，123456
	cout << setfill('*') << setw(10) << aint << endl;    // 输出： **** 123456
	cout << setiosflags(ios::showpos) << aint << endl;   // 输出： +123456


	////////////////////////////////////////////////////////////////////////////////
	// 输出大写的十六进制
	int aint_i = 0x2F, aint_j = 255;            // 定义变量
	cout << aint_i << endl;           // 输出10进制整数
	cout << hex << aint_i << endl;   // 输出十六进制整数
	cout << hex << aint_j << endl;   // 输出十六进制整数
	// 输出大写的十六进制整数
	cout << hex << setiosflags(ios::uppercase) << aint_j << endl;


	////////////////////////////////////////////////////////////////////////////////
	// 控制输出精确度
	int aint_x = 123;                  // 定义整型变量并赋值
	double adouble_y = -3.1415;          // 定义双精通浮点型变量并赋值

	cout << "aint_x=";               // 输出字符串
	cout.width(10);             // 设置宽度为10
	cout << aint_x;                  // 输出aint_x变量的值:'       123'，前面有7个空格
	cout << "adouble_y=";               // 输出字符串
	cout.width(10);             // 设置宽度为10
	cout << setprecision(3)<<adouble_y << endl;     // 输出adouble_y变量的值:'   -3.1415'，前面有3个空格

	cout.setf(ios::left);      // 设置为左对齐
	cout << "aint_x=";               // 输出字符串
	cout.width(10);             // 设置宽度为10
	cout << aint_x;                  // 输出aint_x变量的值:'123       '，后面有7个空格
	cout << "adouble_y=";               // 输出字符串
	cout << adouble_y << endl;      // 输出adouble_y变量的值:'-3.1415   '，后面有3个空格

	cout.fill('*');             // 设置填充的字符为*
	cout.precision(4);          // 设置精度为4位
	cout.setf(ios::showpos);   // 设置输出时显示符号
	cout << "aint_x=";               // 字符串
	cout.width(10);             // 设置宽度为10
	cout << aint_x;                  // 输出aint_x变量的值:'+123******'
	cout << "adouble_y=";               // 输出字符串
	cout.width(10);             // 设置宽度为10
	cout << setprecision(3) << adouble_y << endl;           // 输出adouble_y变量的值:'-3.142****'

	////////////////////////////////////////////////////////////////////////////////
	// 流输出小数控制
	float afloat_x = 20, afloat_y = -400.00;
	cout << setprecision(0) << afloat_x << ' '<<setprecision(0) <<   afloat_y << endl;
	cout.setf(ios::showpoint);         // 强制显示小数点和无效0
	cout << setprecision(2) << afloat_x << ' ' <<setprecision(1)<< afloat_y << endl;
	cout.unsetf(ios::showpoint);
	cout << setprecision(0)<<afloat_x << ' ' << setprecision(0) << afloat_y << endl;
	cout << setprecision(0) << afloat_x << ' ' << setprecision(0) << afloat_y << endl;
}

