#include <iostream>
#include <fstream>
using namespace std;
//int main()
//{
//	ofstream ofile;
//	cout << "Create file1" << endl;
//	ofile.open("test.txt");
//	if (!ofile.fail())
//	{
//		ofile << "name1" << " ";
//		ofile << "sex1" << " ";
//		ofile << "age1";
//		ofile.close();
//		cout << "Create file2" << endl;
//		ofile.open("test2.txt");
//		if (!ofile.fail())
//		{
//			ofile << "name2" << " ";
//			ofile << "sex2" << " ";
//			ofile << "age2";
//			ofile.close();
//		}
//	}
//	return 0;
//}

int main()
{
	ofstream ofile;
	cout << "Create filel" << endl;
	ofile.open("test3.txt");
	if (!ofile.fail()) {
		ofile << "name3" << " ";
		ofile << "sex3" << "";
		ofile << "age3";
		ofile.close();

		cout << "Create file4" << endl;
		ofile.open("test4.txt");
		if (!ofile.fail()) {
			ofile << "name4" << " ";
			ofile << "sex4" << " ";
			ofile << "age4";
			ofile.close();
		}
	}

	return 0;
}





