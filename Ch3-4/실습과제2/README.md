# 코드 설명


```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;
class Circle {
- 원 객체를 정의하는 클래스
private:
- 외부에서 접근 불가능
int radius;
- 원의 반지름 저장 변수
public:
- 외부에서 접근 가능
Circle(int r);
- 반지름을 받아 초기화하는 생성자
Circle();
- 기본 생성자
int getRadius();
- 반지름 값을 반환하는 함수
void setRadius(int r);
- 반지름 값을 변경하는 함수
};
Circle::Circle(int r) : radius(r) {}
- radius 초기화 
Circle::Circle() : Circle(1) {}
int Circle::getRadius() {
	return radius;
}
- radius 값 반환
void Circle::setRadius(int r) {
	radius = r;
}
- radius 값 변경
int main(void) {
- 프로그램 시작점
	Circle waffle;
- 기본 생성자로 객체 생성
	waffle.setRadius(5);
- 반지름을 5로 변경
	cout << "원의 반지름은 " << waffle.getRadius() << endl;
- 현재 반지름 출력 (5)
	return 0;
- 프로그램 종료
}
