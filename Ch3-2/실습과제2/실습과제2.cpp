// **********************************************
// 제 목 : 삼각형 면적값 출력
// 날 짜 : 2026년 03월 17일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>

using namespace std;

class Triangle {
public:
	double w, h;

	Triangle();
	Triangle(double w, double h);

	double getArea();
};

Triangle::Triangle() : Triangle(1,1) {}
Triangle::Triangle(double w, double h):w(w), h(h){}

double Triangle::getArea() {
	return w * h / 2;
}

int main(void) {
	Triangle tri1;
	Triangle tri2(2,4);

	cout << "삼각형의 면적은 " << tri1.getArea() << endl;
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
	return 0;
}
