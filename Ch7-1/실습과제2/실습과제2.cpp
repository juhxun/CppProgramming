// **********************************************
// 제 목 : 실습과제2
// 날 짜 : 2026년 05월27일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>
using namespace std;

class Complex {
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;

        cout << "복소수 " << real << "+" << img << "j 생성" << endl;
    }

    void show() {
        cout << real << "+" << img << "j" << endl;
    }

    friend Complex ComplexAdd(Complex a, Complex b);
};

Complex ComplexAdd(Complex a, Complex b) {
    Complex tmp;

    tmp.real = a.real + b.real;
    tmp.img = a.img + b.img;

    return tmp;
}

int main() {
    Complex x(2, 3), y(-5, 10), sum;

    sum = ComplexAdd(x, y);

    cout << "두 복소수의 합은 ";
    sum.show();

    return 0;
}
