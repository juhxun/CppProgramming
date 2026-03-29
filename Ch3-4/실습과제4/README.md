# 코드 설명
<img width="170" height="121" alt="image" src="https://github.com/user-attachments/assets/d2f5da7a-2067-4c9f-8b39-4fca34ca27c0" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;
class Triangle {
- 삼각형 객체를 정의하는 클래스
private:
- 외부에서 접근 불가능
double width, height;
- 밑변과 높이 저장
double max(double a, double b);
- 두 값 중 큰 값을 반환하는 함수
public:
- 외부에서 접근 가능
Triangle(double w, double h);
- 값 초기화 생성자
Triangle();
- 기본 생성자
~Triangle();
- 소멸자
double getWidth();
- width 반환
double getHeight();
- height 반환
double getArea();
- 면적 계산
void setWidth(double w);
- width 설정
void setHeight(double h);
- height 설정
};
double Triangle::max(double a, double b){
	return a > b ? a : b;
}
- 두 값 중 큰 값을 반환 (삼항 연산자 사용)
Triangle::Triangle(double w, double h) : width(max(1.0, w)), height(max(1.0, h)) {}
- 생성 시 width, height를 최소 1 이상으로 제한
Triangle::Triangle() : Triangle(1, 1) {}
- 기본 생성 시 (1,1)로 초기화
Triangle::~Triangle() {
	cout << "폭" << width << " 높이" << height << " 삼각형 소멸" << endl;
}
- 객체 소멸 시 정보 출력
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
- 면적 계산
void Triangle::setWidth(double w) {
	width = max(1.0, w);
}
- width를 최소 1 이상으로 설정
void Triangle::setHeight(double h) {
	height = max(1.0, h);
}
- height를 최소 1 이상으로 설정
int main(void) {
- 프로그램 시작
	Triangle tri(-10, -5);
- 생성자에서 max 적용 → width=1, height=1
	tri.setWidth(-3);
- 음수 → max 적용 → width=1 유지
	tri.setHeight(-5);
- 음수 → max 적용 → height=1 유지
	cout << "삼각형의 폭은 " << tri.getWidth() << endl;
- width 출력 (1)
	cout << "삼각형의 높이는 " << tri.getHeight() << endl;
- height 출력 (1)
	cout << "삼각형의 넓이는 " << tri.getArea() << endl;
- 면적 출력 (1×1÷2 = 0.5)
	tri.setWidth(3);
- width를 3으로 변경
	tri.setHeight(5);
- height를 5로 변경
	cout << "삼각형의 폭은 " << tri.getWidth() << endl;
- width 출력 (3)
	cout << "삼각형의 높이는 " << tri.getHeight() << endl;
- height 출력 (5)
	cout << "삼각형의 넓이는 " << tri.getArea() << endl;
- 면적 출력 (3×5÷2 = 7.5)
	return 0;
- 프로그램 종료
}
