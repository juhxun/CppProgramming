// **********************************************
// 제 목 : 삼각형 면적값 출력
// 날 짜 : 2026년 03월 17일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>

using namespace std;

class Triangle {
public:
    int x;
    int y;
    double getArea();
};

double Triangle::getArea() {
    return 0.5 * x * y;
}

int main() {
    Triangle tri;
    tri.x = 3;
    tri.y = 5;
    cout << "삼각형의 면적은 " << tri.getArea() << endl;
}
