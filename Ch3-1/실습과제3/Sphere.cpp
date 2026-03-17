// **********************************************
// 제 목 : 구의 부피와 포면적 출력
// 날 짜 : 2026년 03월 17일
// 작성자 : 2301406 박주현
// **********************************************

#include <iostream>
using namespace std;

class Sphere { 
public:
    double r;
    double getVolume();
    double getArea();
};

double Sphere::getVolume() { 
    return (4.0 / 3.0) * 3.14 * r * r * r;
}

double Sphere::getArea() { 
    return 4 * 3.14 * r * r;
}

int main() {
    Sphere s;
    s.r = 3; 
    cout << "구의 반지름: " << s.r << endl;
    cout << "구의 부피: " << s.getVolume() << endl;
    cout << "구의 표면적: " << s.getArea() << endl;
}
