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
