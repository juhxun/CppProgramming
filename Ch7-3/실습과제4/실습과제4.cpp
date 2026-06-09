// **********************************************
// 제 목 : 실습과제 4
// 날 짜 : 2026년 06월08일
// 작성자 : 2301406 박주현
// **********************************************

#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power operator*(int op2);
	Power operator+(Power op2);
	friend Power operator*(int op1, Power op2); 
};
void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}
Power Power:: operator*(int op2) {
	Power tmp;
	tmp.kick = this->kick * op2;
	tmp.punch = this->punch * op2;
	return tmp;
}
Power Power::operator+(Power op2) {
	Power c;
	c.kick = this->kick + op2.kick;
	c.punch = this->punch + op2.punch;
	return c;
}
Power operator*(int op1, Power op2) {
	Power tmp; 
	tmp.kick = op1 * op2.kick;
	tmp.punch = op1 * op2.punch;
	return tmp;
}

int main() {
	Power a(1, 1), b(2, 2), c;
	c.show();
	c = a * 2 + 2 * b;
	c.show();
	return 0;
}
