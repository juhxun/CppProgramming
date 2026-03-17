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

    int getArea() { 
        return width * height;
    }

    int a() { 
        return 2 * (width + height);
    }

    void b(int& bx, int& by) { 
        bx = x + width;
        by = y - height;
    }
};

int main() {
    Rectangle rect;

    cout << "좌측 상단 좌표: (" << rect.x << "," << rect.y << ")" << endl;
    cout << "사각형의 면적: " << rect.getArea() << endl;
    cout << "사각형의 둘레: " << rect.a() << endl;

    int bx, by;
    rect.b(bx, by);
    cout << "우측 하단 좌표: (" << bx << "," << by << ")" << endl;
}
