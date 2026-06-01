// **********************************************
// 제 목 : 실습과제1
// 날 짜 : 2026년 06월01일
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
    }
    Complex operator+(Complex c) {
        Complex temp;

        temp.real = real + c.real;
        temp.img = img + c.img;

        return temp;
    }
    void show() {
        cout << real << "+" << img << "j" << endl;
    }
};

int main() {
    Complex x(2, 3), y(-5, 10), sum;
    sum = x + y;
    cout << "두 복소수의 합은 ";
    sum.show();
    return 0;
}
