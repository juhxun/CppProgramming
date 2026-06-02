// **********************************************
// 제 목 : 실습과제4
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

    Complex operator-(int n) {
        return Complex(real - n, img);
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
    Complex a(3, 5), b;

    a.show();
    b.show();

    b = a - 2;

    a.show();
    b.show();

    return 0;
}
