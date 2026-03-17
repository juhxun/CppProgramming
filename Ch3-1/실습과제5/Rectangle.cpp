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
        cout << "좌측 상단 x 좌표 입력: ";
        cin >> x;
        cout << "좌측 상단 y 좌표 입력: ";
        cin >> y;
        cout << "가로 길이 입력: ";
        cin >> width;
        cout << "세로 길이 입력: ";
        cin >> height;
    }

    int getArea() {
        return width * height;
    }

    int getPerimeter() {
        return 2 * (width + height);
    }

    void getBottomRight(int &bx, int &by) {
        bx = x + width;
        by = y + height;
    }
};

int main() {
    Rectangle rect;

    rect.setData();

    cout << "\n좌측 상단 좌표: (" << rect.x << "," << rect.y << ")" << endl;
    cout << "사각형의 면적: " << rect.getArea() << endl;
    cout << "사각형의 둘레: " << rect.getPerimeter() << endl;

    int bx, by;
    rect.getBottomRight(bx, by);
    cout << "우측 하단 좌표: (" << bx << "," << by << ")" << endl;
}
