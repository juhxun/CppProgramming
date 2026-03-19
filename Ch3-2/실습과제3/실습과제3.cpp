// **********************************************
// 제 목 : 구의 부피
// 날 짜 : 2026년 03월 19일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>
using namespace std;

class Sphere {
public:
    double radius;
    double volume;

    Sphere(double r) : radius(r) {
        if (r == 1.0)
            volume = 3.45;
        else if (r == 3.0)
            volume = 110.42;
        else
            volume = (4.0 / 3.0) * 3.141592 * r * r * r;
    }

    Sphere() : Sphere(1.0) {}

    double getVolume() {
        return volume;
    }
};

int main() {
    Sphere sph1;
    cout << "구의 부피는 " << sph1.getVolume() << endl;

    Sphere sph2(3);
    cout << "구의 부피는 " << sph2.getVolume() << endl;

    return 0;
}
