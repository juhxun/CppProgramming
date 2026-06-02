// **********************************************
// 제 목 : 실습과제3
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

    Complex& operator+=(const Complex& c) {
        real += c.real;
        img += c.img;
        return *this;
    }

    void show() {
        cout << real << "+" << img << "i" << endl;
    }
};

int main() {
    Complex a(3, 5), b(1, 1);

    a.show();
    b.show();

    b += a;

    a.show();
    b.show();

    return 0;
}
