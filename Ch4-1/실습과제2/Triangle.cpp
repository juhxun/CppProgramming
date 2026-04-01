// **********************************************
// 제 목 : 포인터를 이용해 삼각형의 면적 값 출력
// 날 짜 : 2026년 04월 01일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>
using namespace std;

class Triangle {
private:
    double width, height;

public:
    Triangle(double w, double h);
    Triangle();
    ~Triangle();

    double getWidth();
    double getHeight();
    double getArea();

    void setWidth(double w);
    void setHeight(double h);
};

Triangle::Triangle(double w, double h) : width(w), height(h) {}

Triangle::Triangle() : Triangle(1, 1) {}

Triangle::~Triangle() {}

double Triangle::getWidth() {
    return width;
}

double Triangle::getHeight() {
    return height;
}

double Triangle::getArea() {
    return width * height / 2;
}

void Triangle::setWidth(double w) {
    width = w;
}

void Triangle::setHeight(double h) {
    height = h;
}

int main(void) {
    Triangle* tri = new Triangle;

    tri->setWidth(3);
    tri->setHeight(5);

    cout << "삼각형의 면적은 " << tri->getArea() << endl;

    delete tri;

    return 0;
}
