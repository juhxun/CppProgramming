// **********************************************
// 제 목 : 실습과제3
// 날 짜 : 2026년 05월20일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>
using namespace std;

class Triangle {
    static int count;

public:
    Triangle() {
        count++;
    }
    ~Triangle() {
        count--;
    }
    static int getNumofTriangle() {
        return count;
    }
};

int Triangle::count = 0;

int main() {
    Triangle* tri1 = new Triangle[5];

    cout << "생성된 삼각형의 개수 : "
         << Triangle::getNumofTriangle() << endl;

    delete[] tri1;

    Triangle tri2[15];

    cout << "생성된 삼각형의 개수 : "
         << Triangle::getNumofTriangle() << endl;

    return 0;
}
