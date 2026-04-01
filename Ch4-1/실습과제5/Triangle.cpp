// **********************************************
// 제 목 : 배열을 활용한 삼격형의 면적 출력
// 날 짜 : 2026년 04월 01일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>
using namespace std;

class Triangle {
private:
    int base;
    int height;

public:
    Triangle(int base = 1, int height = 1) {
        this->base = base;
        this->height = height;
        cout << "밑변" << this->base << ",높이" << this->height << "인 삼각형 생성" << endl;
    }

    ~Triangle() {
        cout << "밑변" << this->base << ",높이" << this->height << "인 삼각형 소멸" << endl;
    }

    int getArea() {
        return (this->base * this->height) / 2;
    }
};

int main() {

    Triangle* tri = new Triangle[3]{
        Triangle(2,2),
        Triangle(4,4),
        Triangle(6,6)
    };

    for (int i = 0; i < 3; i++) {
        cout << "삼각형" << i << "의 면적은 " << tri[i].getArea() << endl;
    }

    delete[] tri;

    return 0;
}
