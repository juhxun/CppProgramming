// **********************************************
// 제 목 : 원의 반지름 출력
// 날 짜 : 2026년 03월 30일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>
using namespace std;

class Triangle {
private:
    double width;
    double height;

public:
    Triangle(double w, double h) : width(w), height(h) {
        cout << "폭" << width << ",높이" << height << "인 삼각형 생성" << endl;
    }

    ~Triangle() {
        cout << "폭" << width << ",높이" << height << "인 삼각형 소멸" << endl;
    }

    double area() {
        return width * height / 2.0;
    }
};

int main() {
    Triangle t1(1, 1);

    Triangle t2(3, 5);
    cout << "삼각형의 면적은 " << t2.area() << endl;

    return 0;
}
