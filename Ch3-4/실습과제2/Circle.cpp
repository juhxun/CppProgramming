#include <iostream>

using namespace std;

class Circle {
private:
	int radius;

public:
	Circle(int r);
	Circle();
	int getRadius();
	void setRadius(int r);
};

Circle::Circle(int r) : radius(r) {}

Circle::Circle() : Circle(1) {}

int Circle::getRadius() {
	return radius;
}

void Circle::setRadius(int r) {
	radius = r;
}

int main(void) {
	Circle waffle;
	waffle.setRadius(5);

	cout << "원의 반지름은 " << waffle.getRadius() << endl;
	return 0;
}
