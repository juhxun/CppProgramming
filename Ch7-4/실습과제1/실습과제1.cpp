// **********************************************
// 제 목 : 실습과제1
// 날 짜 : 2026년 06월 10일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>
using namespace std;

class Complex {
	int real;
	int img;
public:
	Complex(int real = 0, int img = 0) {
		this->real = real; 
		this->img = img;
	}
	void show();
	friend istream& operator>>(istream& op1, Complex& op2); 
	friend ostream& operator<<(ostream& op1, Complex& op2); 
};

istream& operator>> (istream& op1, Complex& op2) {
	cout << "실수부:";
	op1 >> op2.real;

	cout << "허수부:";
	op1 >> op2.img;

	return op1;
}

ostream& operator<< (ostream& op1, Complex& op2) {
	if (op2.img <  0) {
		op1 << op2.real << op2.img << "j" << endl;
	}
	else{
		op1 << op2.real << "+" << op2.img << "j" << endl;
	}
	return op1;
}

int main() {
	Complex x, y;
	cin >> x >> y;
	cout << x << y;
	return 0;
}
