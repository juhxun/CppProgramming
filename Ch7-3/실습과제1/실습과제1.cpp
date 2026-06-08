// **********************************************
// 제 목 : 실습과제 1
// 날 짜 : 2026년 06월08일
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

    Complex& operator++() {
        real++;
        img++;
        return *this;
    }

    Complex operator--(int) {
        Complex temp = *this;

        real--;
        img--;

        return temp;
    }

    void show() {
        cout << real << "+" << img << "j" << endl;
    }
};

int main() {
    Complex x(2, -3);

    ++x;
    cout << "증가결과 ";
    x.show();

    x--;
    cout << "감소결과 ";
    x.show();

    return 0;
}
