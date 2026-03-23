// **********************************************
// 제 목 : 삼각형 면적값 출력
// 날 짜 : 2026년 03월 23일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>

using namespace std;

class Triangle {
public:
	double w, h;
	double getArea();
	Triangle(double _w, double _h);
	Triangle();
	~Triangle();
};
double Triangle::getArea() {
	return w * h / 2;
}
Triangle::Triangle(double _w, double _h) : w(_w), h(_h) {
	cout << "밑변 " << _w << "높이 " << _h << "인 삼각형 객체 생성" << endl;
}
Triangle::Triangle() : Triangle(1, 1) {}
Triangle::~Triangle() {
	cout << "밑변 " << w << "높이 " << h << "인 삼각형 객체 소멸" << endl;
}
int main(void) {
	Triangle tri1;
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;
	Triangle tri2(2, 4);
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
	return 0;
}
