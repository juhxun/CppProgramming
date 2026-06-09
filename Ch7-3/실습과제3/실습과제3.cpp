// **********************************************
// 제 목 : 실습과제 3
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
	friend Power operator*(int op1, Power op2); 
};
void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}
Power operator*(int op1, Power op2) {
	Power tmp; 
	tmp.kick = op1 * op2.kick;
	tmp.punch = op1 * op2.punch;
	return tmp;
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = 2 * a; 
	a.show();
	b.show();
	return 0;
}
