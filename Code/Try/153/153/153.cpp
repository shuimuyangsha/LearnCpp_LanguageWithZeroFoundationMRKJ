// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  ���������ռ䡰net::tcpip���������ж��������port������main��
  ����ͨ�����ʱ�����port��
*/

using namespace std;

namespace net {
	namespace tcp {
		short port;
	}
}


int main(int argc, char* argv[])
{
	net::tcp::port = 9527;
	cout << net::tcp::port << endl;
	return 0;
}
