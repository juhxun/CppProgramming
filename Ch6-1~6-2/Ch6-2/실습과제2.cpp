// **********************************************
// 제 목 : 실습과제2.cpp
// 날 짜 : 2026년 05월18일
// 작성자 : 2301406 홍길동
// **********************************************
#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int w = 1, int h = 1) {
        width = w;
        height = h;
    }

    void show() {
        cout << "사각형 폭은 " << width
             << " 높이는 " << height << endl;
    }
};

int main() {
    Rectangle rect0;
    rect0.show();

    Rectangle rect1(10);
    rect1.show();

    Rectangle rect2(10, 20);
    rect2.show();

    return 0;
}
