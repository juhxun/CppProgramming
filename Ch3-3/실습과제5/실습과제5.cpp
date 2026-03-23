// **********************************************
// 제 목 : 구의 부피 출력
// 날 짜 : 2026년 03월 23일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>
using namespace std;

class Sphere {
public:
    double r;
    Sphere();
    Sphere(double _r);
    ~Sphere();
    double getVolume();
};
double Sphere::getVolume() {
    return 4.0 / 3.0 * 3.14 * r * r * r;
}
Sphere::Sphere(double _r) : r(_r) {
    cout << "반지름 " << r << "인 구 생성" << endl;
}
Sphere::Sphere() : Sphere(1) {}

Sphere::~Sphere() {
    cout << "반지름 " << r << "인 구 소멸" << endl;
}
Sphere sph1(10);
Sphere sph2(20);

int main() {
    cout << "구의 부피는 " << sph1.getVolume() << endl;
    cout << "구의 부피는 " << sph2.getVolume() << endl;
    return 0;
}
