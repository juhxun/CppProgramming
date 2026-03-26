#include <iostream>

using namespace std;

class Triangle {
private:
	double width, height;

	double max(double a, double b);

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

double Triangle::max(double a, double b){
	return a > b ? a : b;
}

Triangle::Triangle(double w, double h) : width(max(1.0, w)), height(max(1.0, h)) {}

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
	width = max(1.0, w);
}

void Triangle::setHeight(double h) {
	height = max(1.0, h);
}

int main(void) {
	Triangle tri(-10, -5);
	
	tri.setWidth(-3);
	tri.setHeight(-5);
	cout << "삼각형의 폭은 " << tri.getWidth() << endl;
	cout << "삼각형의 높이는 " << tri.getHeight() << endl;
	cout << "삼각형의 넓이는 " << tri.getArea() << endl;
	
	tri.setWidth(3);
	tri.setHeight(5);
	cout << "삼각형의 폭은 " << tri.getWidth() << endl;
	cout << "삼각형의 높이는 " << tri.getHeight() << endl;
	cout << "삼각형의 넓이는 " << tri.getArea() << endl;

	return 0;
}
