// **********************************************
// 제 목 : this포인터를 활용한 삼격형의 면적 출력
// 날 짜 : 2026년 04월 01일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>
using namespace std;

class Triangle {
private:
    double a;
    double h;

public:
    Triangle() {
        this->a = 1;
        this->h = 1;
    }
    Triangle(double b) {
        this->a = b;
        this->h = 1;
    }
    Triangle(double b, double h) {
        this->a= b;
        this->h = h;
    }
    double getArea() {
        return (this->a * this->h) / 2;
    }
};

int main() {
    Triangle tri1;
    cout << "삼각형의 면적은 " << tri1.getArea() << endl;
    Triangle tri2(10);
    cout << "삼각형의 면적은 " << tri2.getArea() << endl;
    Triangle tri3(10, 2);
    cout << "삼각형의 면적은 " << tri3.getArea() << endl;
    return 0;
}
