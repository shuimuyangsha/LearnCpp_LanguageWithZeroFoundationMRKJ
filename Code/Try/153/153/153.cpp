// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
  定义命名空间“net::tcpip”，在其中定义变量“port”，在main函
  数中通过访问变量“port”
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
