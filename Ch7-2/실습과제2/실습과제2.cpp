// **********************************************
// 제 목 : 실습과제1
// 날 짜 : 2026년 06월01일
// 작성자 : 2301406 박주현
// **********************************************

#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;
    }

    Complex operator*(const Complex& c) {
        Complex temp;
        temp.real = real * c.real - img * c.img;
        temp.img = real * c.img + img * c.real;
        return temp;
    }

    void show() {
        cout << real;
        if (img >= 0)
            cout << "+" << img << "i" << endl;
        else
            cout << img << "i" << endl;
    }
};

int main() {
    Complex x(2, 3), y(-5, 10), sum;

    sum = x * y;

    cout << "두 복소수의 곱은 ";
    sum.show();

    return 0;
}
