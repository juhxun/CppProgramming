// **********************************************
// 제 목 : 사각형
// 날 짜 : 2026년 03월 19일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>
using namespace std;

class Rectangle {
public:
    int x, y;
    int width, height;

    Rectangle(int x, int y, int w, int h)
        : x(x), y(y), width(w), height(h) {
    }

    Rectangle(int w, int h)
        : Rectangle(0, 0, w, h) {
    }

    int getArea() {
        return width * height;
    }

    int getPerimeter() {
        return 2 * (width + height);
    }

    void printBottomRight() {
        cout << "(" << x + width << ", " << y + height << ")";
    }
};

int main() {
    Rectangle rect1(1, 1);
    Rectangle rect2(1, 1);
    Rectangle rect3(2, 0, 3, 1);

    cout << "rect1의 면적은 " << rect1.getArea() << endl;
    cout << "rect2의 둘레길이는 " << rect2.getPerimeter() << endl;
    cout << "rect3의 우측하단의 좌표는 ";
    rect3.printBottomRight();
    cout << endl;

    return 0;
}
