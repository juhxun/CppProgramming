// **********************************************
// 제 목 : 사각형 계산값 출력
// 날 짜 : 2026년 03월 17일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>
using namespace std;

class Rectangle {
public:
    int x;
    int y;
    int width;
    int height;

    Rectangle() {
        x = 1;
        y = 2;
        width = 3;
        height = 4;
    }

    void setData() {
        cout << "사각형의 좌측상단좌표(x,y) : ";
        cin >> x >> y;
        cout << "사각형의 폭과 높이(width,height) : ";
        cin >> width >> height;
    }

    int getArea() {
        return width * height;
    }

    int P() {
        return 2 * (width + height);
    }

    void b() {
        int bx = x + width;
        int by = y - height;
        cout << "사각형의 우측하단의 좌표는 (" << bx << ", " << by << ")" << endl;
    }
};

int main() {
    Rectangle rect;

    rect.setData();

    cout << "사각형의 면적은 " << rect.getArea() << endl;
    cout << "사각형의 둘레길이는 " << rect.P() << endl;
    rect.b();
}
