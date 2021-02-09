// Try.cpp : Defines the entry point for the console application.
//

#include <iostream>

/*
大型商超为答谢新老顾客，当累计消费金额达到一定数额时，顾客可享受不同的折扣：
①尚未满500元，顾客须按照小票价格支付全款；
②满500元，顾客全部的消费金额可享9折优惠；
③满1000元，顾客全部的消费金额可享8折优惠；
④满2000元，顾客全部的消费金额可享7折优惠；
⑤满3000元，顾客全部的消费金额可享6折优惠；
⑥满5000元，顾客全部的消费金额可享5折优惠；
根据顾客购物小票上消费金额，在控制台上输出该顾客将享受的折扣与打扣后需支付的金额。
*/

using namespace std;
int main(int argc, char* argv[])
{
	float input;
	cin >> input;
	if (input < 500) {
		cout << "①尚未满500元，顾客须按照小票价格支付全款；" << endl;
		return 0;
	}
	if (input < 1000) {
		cout << "②满500元，顾客全部的消费金额可享9折优惠；" << endl;
		return 0;
	}
	if (input < 2000) {
		cout << "③满1000元，顾客全部的消费金额可享8折优惠；" << endl;
		return 0;
	}
	if (input < 3000) {
		cout << "④满2000元，顾客全部的消费金额可享7折优惠；" << endl;
		return 0;
	}
	if (input < 5000) {
		cout << "⑤满3000元，顾客全部的消费金额可享6折优惠；" << endl;
		return 0;
	}
	if (input >= 5000) {
		cout << "⑥满5000元，顾客全部的消费金额可享5折优惠；" << endl;
		return 0;
	}
	return 0;
}

