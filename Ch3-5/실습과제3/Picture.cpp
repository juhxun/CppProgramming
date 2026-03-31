// **********************************************
// 제 목 : 사진
// 날 짜 : 2026년 03월 30일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>
using namespace std;

class Picture {
private:
    int width, height;
    string place;

public:
    Picture() {
        width = 5;
        height = 7;
        place = "모름";
    }

    Picture(int w, int h, string p) {
        width = w;
        height = h;
        place = p;
    }

    int getWidth() { return width; }
    int getHeight() { return height; }
    string getPlace() { return place; }
};

int main() {
    Picture pic;
    Picture mt(10, 14, "한라산");

    cout << pic.getWidth() << "x" << pic.getHeight() << " " << pic.getPlace() << endl;
    cout << mt.getWidth() << "x" << mt.getHeight() << " " << mt.getPlace() << endl;
}
