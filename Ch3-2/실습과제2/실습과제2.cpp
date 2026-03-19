// **********************************************
// 제 목 : 삼각형 면적값 출력
// 날 짜 : 2026년 03월 19일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>

using namespace std;

class Triangle {
public:
	double width, height;

	Triangle();
	Triangle(double width, double height);

	double getArea();
};

Triangle::Triangle() : Triangle(1,1) {}
Triangle::Triangle(double width, double height):width(width), height(height){}

double Triangle::getArea() {
	return width * height / 2;
}

int main(void) {
	Triangle tri1;
	Triangle tri2(2,4);

	cout << "삼각형의 면적은 " << tri1.getArea() << endl;
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
	return 0;
}
