# 코드설명


```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;
class Triangle {
- 삼각형 객체를 정의하는 클래스
private:
- 외부에서 접근 불가능
double width, height;
- 삼각형의 밑변과 높이 저장
public:
- 외부에서 접근 가능
Triangle(double w, double h);
- 값을 받아 초기화하는 생성자
Triangle();
- 기본 생성자
~Triangle();
- 소멸자
double getWidth();
- width 값을 반환하는 함수
double getHeight();
- height 값을 반환하는 함수
double getArea();
- 삼각형 면적 계산 함수
void setWidth(double w);
- width 값을 설정하는 함수
void setHeight(double h);
- height 값을 설정하는 함수
};
Triangle::Triangle(double w, double h) : width(w), height(h) {}
- width, height 초기화
Triangle::Triangle() : Triangle(1, 1) {}
- 기본 생성 시 (1,1) 값으로 위임 생성자 호출
Triangle::~Triangle() {
	cout << "폭" << width << " 높이" << height << " 삼각형 소멸" << endl;
}
- 객체 소멸 시 호출되어 정보 출력
double Triangle::getWidth() {
	return width;
}
- width 값 반환
double Triangle::getHeight() {
	return height;
}
- height 값 반환
double Triangle::getArea() {
	return width * height / 2;
}
- 삼각형 면적 계산 후 반환
void Triangle::setWidth(double w) {
	width = w;
}
- width 값 변경
void Triangle::setHeight(double h) {
	height = h;
}
- height 값 변경
int main(void) {
- 프로그램 시작점
	Triangle tri;
- 기본 생성자로 tri 생성 (초기값: width=1, height=1)
	tri.setWidth(3);
- width 값을 3으로 변경
	tri.setHeight(5);
- height 값을 5로 변경
	cout << "삼각형의 폭은 " << tri.getWidth() << endl;
- 현재 width 값 출력 (3)
	cout << "삼각형의 높이는 " << tri.getHeight() << endl;
- 현재 height 값 출력 (5)
	cout << "삼각형의 넓이는 " << tri.getArea() << endl;
- 면적 출력 (3×5÷2 = 7.5)
	return 0;
- 프로그램 종료
}
