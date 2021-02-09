#include <iostream>
#include<string.h>
using namespace std;
class CEmployee                                        //定义CEmployee类
{
public:
	int m_ID;                                            //定义数据成员
	char m_Name[128];                                    //定义数据成员
	char m_Depart[128];                                    //定义数据成员
	CEmployee(const char name[20])                                //带参数的构造函数
	{
		strcpy(m_Name, name);
		cout << m_Name << "调用了CEmployee类带参数的构造函数" << endl;
	}
	CEmployee()                                        //无参构造函数
	{
		strcpy(m_Name, "MR");
		cout << m_Name << "CEmployee类无参构造函数被调用" << endl;
	}
	~CEmployee()                                        //析构函数
	{
		cout << "CEmployee类析构函数被调用" << endl;        //输出信息
	}
};
class COperator :public CEmployee                            //从CEmployee类派生一个子类
{
public:
	char m_Password[128];                                //定义数据成员
	COperator(const char name[]) :CEmployee(name)                //显示调用父类带参数的构造函数
	{        //设置数据成员
		cout << "COperator类构造函数被调用" << endl;            //输出信息
	}
	COperator() :CEmployee("JACK")                        //显示调用父类带参数的构造函数
	{        //设置数据成员
		cout << "COperator类构造函数被调用" << endl;            //输出信息
	}
	~COperator()                                        //析构函数
	{
		cout << "COperator类析构函数被调用" << endl;            //输出信息
	}
};
int main(int argc, char* argv[])                                //主函数
{
	COperator optr1;                        //定义一个COperator对象，调用自身无参构造函数
    COperator optr2("LaoZhang");           //定义一个COperator对象，调用自身带参数构造函数
	return 0;
}
