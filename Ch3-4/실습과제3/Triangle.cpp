// **********************************************
// 제 목 : 삼각형의 여러 값 출력
// 날 짜 : 2026년 03월 26일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>

using namespace std;

class Triangle {
private:
	double width, height;
	
public:
	Triangle(double w, double h);
	Triangle();
	~Triangle();

	double getWidth();
	double getHeight();
	double getArea();

	void setWidth(double w);
	void setHeight(double h);
};

Triangle::Triangle(double w, double h) : width(w), height(h) {}

Triangle::Triangle() : Triangle(1, 1) {}

Triangle::~Triangle() {
	cout << "폭" << width << " 높이" << height << " 삼각형 소멸" << endl;
}

double Triangle::getWidth() {
	return width;
}

double Triangle::getHeight() {
	return height;
}

double Triangle::getArea() {
	return width * height / 2;
}

void Triangle::setWidth(double w) {
	width = w;
}

void Triangle::setHeight(double h) {
	height = h;
}

int main(void) {
	Triangle tri;
	tri.setWidth(3);
	tri.setHeight(5);

	cout << "삼각형의 폭은 " << tri.getWidth() << endl;
	cout << "삼각형의 높이는 " << tri.getHeight() << endl;
	cout << "삼각형의 넓이는 " << tri.getArea() << endl;

	return 0;
}
