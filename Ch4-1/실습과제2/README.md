# 코드 설명

<img width="183" height="31" alt="image" src="https://github.com/user-attachments/assets/f4123d0e-8cd0-4288-9e1b-b4dd2d169523" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
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
